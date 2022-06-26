#ifndef EMU2413_PICOI2SAUDIODRIVER_H
#define EMU2413_PICO12SAUDIODRIVER_H

#include "pico/util/queue.h"
#include "pico/multicore.h"
#include "pico/sem.h"

#include "audio_i2s/picoI2sAudio.h"
#include "miditones/miditones.h"
#include "miditones/miditonesFile.h"
#include "emu2413.h"

#define MSX_CLK 3579545

// source: https://github.com/htlabnet/YM2413_Shield_For_v1/blob/master/Firmware/YM2413_MIDI/YM2413_MIDI.ino
// F-Number table
const uint16_t fnum[12] = {172, 181, 192, 204, 216, 229, 242, 257, 272, 288, 305, 323};

class emu2413picoI2s : public PicoI2sAudio<emu2413picoI2s> , public PlayTune<emu2413picoI2s> {
    public:
        emu2413picoI2s();

        // Pico I2S functions:
        int16_t getSample();

        // emu2413 functions:
        inline void writeReg(uint32_t reg, uint8_t data) { OPLL_writeReg(&opll, reg, data); }
        
        // emu2413 related functions for MidiTones:
        inline uint8_t oct_calc(uint8_t num);
        inline uint16_t fnum_calc(uint8_t num);

        // MidiTones functions:
        inline void noteOff(uint8_t chan);
        inline void noteOn(uint8_t chan, uint8_t num);

        // Microcontroller SDK specific functions:
        inline void mutexTryEnter();
        inline void mutexExit();
        inline void sleepMs(uint32_t ms) { sleep_ms(ms); }

    private:
        static OPLL opll;
        static OPLL_RateConv opll_conv;
        
        // Microcontroller SDK specific variables:
        mutex_t stepScoreMutex;
        uint32_t owner;
};

inline void emu2413picoI2s::mutexTryEnter()
{
    if (!mutex_try_enter(&stepScoreMutex, &owner))
    {
        // printf("at core 0 - locked, owner: %d, core_num: %d\n", owner, get_core_num());
        mutex_enter_blocking(&stepScoreMutex);
    }
}

inline void emu2413picoI2s::mutexExit()
{
    mutex_exit(&stepScoreMutex);
}

inline uint16_t emu2413picoI2s::fnum_calc(uint8_t num)
{
    // num = 0 - 127 -> (12 - 107[8oct]) (MIDI Note Numbers)
    return fnum[num % 12];
}

inline uint8_t emu2413picoI2s::oct_calc(uint8_t num)
{
    // oct = 0 - 7
    if (num < 12)
    {
        return 0;
    }
    else if (num > 107)
    {
        return 7;
    }
    else
    {
        return num / 12;
    }
}

inline void emu2413picoI2s::noteOn(uint8_t chan, uint8_t num)
{
    OPLL_writeReg(&opll, 0x10 + chan, fnum_calc(num));
    OPLL_writeReg(&opll, 0x20 + chan, (0b10000 | ((oct_calc(num) << 1) & 0b1110) | ((fnum_calc(num) >> 8) & 0b1)));
}

inline void emu2413picoI2s::noteOff(uint8_t chan)
{
    OPLL_writeReg(&opll, 0x10 + chan, 0x00);
    OPLL_writeReg(&opll, 0x20 + chan, 0x00);
}
#endif