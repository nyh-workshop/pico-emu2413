#include <stdio.h>
#include "emu2413.h"
#include "pico/stdlib.h"
#include "hardware/interp.h"

#include "audio_i2s/picoI2Saudio.h"
#include "emu2413_picoI2sAudioDriver.h"

// todo: better descriptive name for "sem"!
// Basically this semaphore is have the core0 to wait for the core1 to get the OPLL object's pointer
// before moving on to playing samples.
static semaphore_t sem;

void core1_entry() {

  printf("Entering core1! :D\n");
  printf("Waiting for OPLL ptr from core0!\n");

  // Getting this OPLL pointer from core0!
  uint32_t OPLL_ptr = multicore_fifo_pop_blocking();

  printf("Received! OPLL ptr: 0x%x\n", OPLL_ptr);

  sem_release(&sem);

  if ((emu2413picoI2s*)OPLL_ptr == nullptr)
    panic("OPLL_ptr for core1 is nullptr!\n");

  while (1)
  {
    if (((emu2413picoI2s *)OPLL_ptr)->isPlaying())
    {
      ((emu2413picoI2s *)OPLL_ptr)->mutexTryEnter();
      ((emu2413picoI2s *)OPLL_ptr)->playSamples();
      ((emu2413picoI2s *)OPLL_ptr)->mutexExit();
    }
    else {
      printf("Sleep at Core1!\n");
      sleep_ms(1000);
    }
  }
}

int main()
{
    // attempt to overclock to 270MHz: https://www.raspberrypi.org/forums/viewtopic.php?t=304309
    if (!set_sys_clock_khz(270000, false))
      printf("system clock 270MHz failed\n");
    else
      printf("system clock now 270MHz\n");
    
    stdio_init_all();

    sem_init(&sem, 0, 2);

    emu2413picoI2s OPLL;

    // Adjust the MIDI notes by how many semitones - in this case it is 2 (because of the lack of resampling steps in OPLL_Calc):
    OPLL.setNoteAdjust(2);

    OPLL.writeReg(0x30, 0x30);
    OPLL.writeReg(0x31, 0x30); 
    OPLL.writeReg(0x32, 0x30);
    OPLL.writeReg(0x33, 0x30);
    OPLL.writeReg(0x34, 0x30);
    OPLL.writeReg(0x35, 0x30);
    OPLL.writeReg(0x36, 0x30);
    //OPLL.writeReg(0x10, 0x80); /* set F-Number(L). */
    //OPLL.writeReg(0x20, 0x15); /* set BLK & F-Number(H) and
                                 /* keyon. */

    multicore_launch_core1(core1_entry);

    printf("Starting, sending OPLL ptr to core1!: 0x%x\n", (uintptr_t)&OPLL);
    multicore_fifo_push_blocking((uintptr_t)&OPLL);
    
    sem_acquire_blocking(&sem);

    printf("Core1 gets the OPLL ptr already! Now playing!\n");

    OPLL.startPlaying();

    while(1) {
      if (OPLL.isPlaying())
        OPLL.stepScore();
      else {
        printf("Sleep at Core0!\n");
        sleep_ms(1000);
      }
    }

    return 0;
}