#include "snow.h"
#include "Tone.h"

int snow_mel[] = {
    NOTE_C4, NOTE_C4, NOTE_C5, NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_C4,
    NOTE_C4, NOTE_C4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_C4,
    NOTE_C4, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_G4,
    NOTE_E5, NOTE_D5, NOTE_C5, NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_F4, 
};

int snow_har[] = {
    NOTE_C3, NOTE_C3, NOTE_F3, NOTE_F3, NOTE_F3, NOTE_F3, NOTE_F3, NOTE_A3, NOTE_A3,
    NOTE_A3, NOTE_A3, NOTE_AS3, NOTE_AS3, NOTE_B3, NOTE_B3, NOTE_C4, NOTE_C3,
    NOTE_A3, NOTE_AS3, NOTE_AS3, NOTE_A3, NOTE_G3, NOTE_F3, NOTE_C3,
    NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_CS3, NOTE_D3, NOTE_DS3, NOTE_E3, NOTE_F3, 
};

int snow_len[] = {
  2, 1, 2, 1, 3, 3, 3, 3, 6,
  2, 1, 5, 1, 5, 1, 3, 8,
  1, 2, 1, 3, 3, 3, 9,
  2, 1, 3, 2, 1, 3, 2, 1, 9
};

const Tune Snow_Tune = {
  .melody = snow_mel,
  .harmony = snow_har,
  .lengths = snow_len,
  .size = sizeof(snow_mel) / sizeof(int)
};