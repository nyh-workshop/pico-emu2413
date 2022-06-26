#include "emu2413_picoI2sAudioDriver.h"

OPLL emu2413picoI2s::opll;
OPLL_RateConv emu2413picoI2s::opll_conv;

emu2413picoI2s::emu2413picoI2s() {
    mutex_init(&stepScoreMutex);
    OPLL_new(&opll, &opll_conv, false, MSX_CLK, SAMPLE_RATE);
    playScore(mdtFile1);
}

int16_t emu2413picoI2s::getSample() {
    return OPLL_calc(&opll);
}
