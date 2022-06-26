# Raspberry Pico EMU2413

This is the YM2413 emulator by Mitsutaka Okazaki and Rupert Carmichael (https://github.com/digital-sound-antiques/emu2413) ported to the Raspberry Pico RP2040.

The program opens up the Miditones song file in the memory and play it with the EMU2413. 

Requirements:
- Raspberry Pico SDK (with ARM GCC 11.2-2022.02 and beyond)
- Pico-Extras (https://github.com/raspberrypi/pico-extras)
- I2S DAC (PCM5102)
- UART0 at GP0 and GP1 of the Raspberry Pico
- EMU2413 version 1.5.7

Limitations:
- Some of the EMU2413 code has been changed to fit into that embedded system. Means that there are no memory allocations and a number of the tables (especially the large ones like tll_table) are precalculated with constexpr.
- Since the RP2040 lacks of a hardware floating point unit, all of the resampling in the EMU2413 are disabled.
- Without the resamplers active, the output frequency is off compared to the actual emulation of YM2413 on other platforms. Currently it is not known how much output frequency errors are present.
- The percussions are not tested yet. It is not sure if the percussive sounds are being rendered correctly without that mentioned resampler.
- There are clicking noises between note switches - this is mitigated by using an older version of the Miditones (v1.12) where there are note stops before the note change happens. This note stops allow the brief release of the note in the envelope generator and significantly minimizes the unpleasent noise.
- The RP2040 has to be overclocked to 270MHz to prevent stuttering and sampling rate at 22050Hz. The OPLL calculations inside require quite a number of computation power which the RP2040 could not cope up if it is using the 125MHz speed.

Extra info:
- New wrapper functions for Pico Extras Audio I2S for easy integration (refer to picoI2sAudio.h)
- New wrapper functions for Miditones v1.12 (refer to the "static compilation virtual" of Miditones.h)
- These audio_i2s and Miditones folder libraries are now decoupled and can be used in other projects
- The Pico Extras Audio I2S driver, Miditones and the EMU2413 are combined together for ease of use (refer to emu2413_picoI2sAudioDriver.h)