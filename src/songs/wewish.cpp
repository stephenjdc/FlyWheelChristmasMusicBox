#include "wewish.h"
#include "Tone.h"

int xmas_mel[] = {
    NOTE_C4, NOTE_F4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_D4,
    NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_C4, 
    NOTE_C4, NOTE_A4, NOTE_A4, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_D4,
    NOTE_C4, NOTE_C4, NOTE_D4, NOTE_G4, NOTE_E4, NOTE_F4,
  };
int xmas_har[] = {
    NOTE_E3, NOTE_A3, NOTE_A3, NOTE_A3, NOTE_A3, NOTE_A3, NOTE_AS3, NOTE_AS3, NOTE_AS3,
    NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_C4, NOTE_C4, 
    NOTE_C4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_D4, NOTE_AS3,
    NOTE_A3, NOTE_A3, NOTE_AS3, NOTE_AS3, NOTE_C4, NOTE_F3,
};

int xmas_len[] = {
  2, 2, 1, 1, 1, 1, 2, 2, 2,
  2, 1, 1, 1, 1, 2, 2, 2,
  2, 1, 1, 1, 1, 2, 2, 1, 1,
  2, 2, 2, 4,
};

const Tune WeWish_Tune = {
  .melody = xmas_mel,
  .harmony = xmas_har,
  .lengths = xmas_len,
  .size = sizeof(xmas_mel) / sizeof(int)
};