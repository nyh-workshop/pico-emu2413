# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialise pico_sdk from installed location
# (note this can come from environment, CMake cache etc)
set(PICO_SDK_PATH "E:/pico-sdk")

set(PICO_EXTRAS_PATH "E:/pico-extras")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

# We also need PICO EXTRAS
include(pico_extras_import.cmake)

project(pico-emu2413 C CXX ASM)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()

# Add executable. Default name is the project name, version 0.1

add_executable(pico-emu2413 pico-emu2413.cpp
audio_i2s/picoI2sAudio.cpp audio_i2s/audio_i2s.c
emu2413_picoI2sAudioDriver.cpp emu2413.cpp  
miditones/miditones.cpp miditones/midiFreqTable.cpp miditones/miditonesFile.cpp
)

pico_generate_pio_header(pico-emu2413 ${CMAKE_CURRENT_LIST_DIR}/audio_i2s/audio_i2s.pio)

pico_set_program_name(pico-emu2413 "pico-emu2413")
pico_set_program_version(pico-emu2413 "0.1")

pico_enable_stdio_uart(pico-emu2413 1)
pico_enable_stdio_usb(pico-emu2413 0)

target_compile_definitions(pico-emu2413 PRIVATE PICO_AUDIO_I2S_MONO_INPUT)

# Add the standard library to the build
target_link_libraries(pico-emu2413
        pico_stdlib
        pico_audio
        pico_multicore
        )

# Add any user requested libraries
target_link_libraries(pico-emu2413
        hardware_dma
        hardware_pio
        hardware_interp
        )

pico_add_extra_outputs(pico-emu2413)
