#include "silnight.h"
#include "Tone.h"

static const int silentNight_mel[] = {
  NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4,
  NOTE_D5, NOTE_D5, NOTE_B4, NOTE_C5, NOTE_C5, NOTE_G4,
  NOTE_A4, NOTE_A4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4,
  NOTE_A4, NOTE_A4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4,
  NOTE_D5, NOTE_D5, NOTE_F5, NOTE_D5, NOTE_B4, NOTE_C5, NOTE_E5,
  NOTE_C5, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_F4, NOTE_D4, NOTE_C4
};

static const int silentNight_har[] = {
  NOTE_C3, NOTE_C3, NOTE_E3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_E3, NOTE_C3,
  NOTE_G3, NOTE_G3, NOTE_G3, NOTE_C3, NOTE_C3, NOTE_C3,
  NOTE_F3, NOTE_F3, NOTE_F3, NOTE_F3, NOTE_F3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3,
  NOTE_F3, NOTE_F3, NOTE_F3, NOTE_F3, NOTE_F3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3,
  NOTE_G3, NOTE_G3, NOTE_G3, NOTE_G3, NOTE_G3, NOTE_C3, NOTE_C3,
  NOTE_C3, NOTE_C3, NOTE_C3, NOTE_G3, NOTE_G3, NOTE_G3, NOTE_C3
};

static const int silentNight_len[] = {
  3, 1, 2, 6, 3, 1, 2, 6,
  4, 2, 6, 4, 2, 6,
  4, 2, 3, 1, 2, 3, 1, 2, 6,
  4, 2, 3, 1, 2, 3, 1, 2, 6,
  4, 2, 2, 2, 2, 6, 6,
  2, 2, 2, 3, 1, 2, 12
};

const Tune SilentNight_Tune = {
  silentNight_mel,
  silentNight_har,
  silentNight_len,
  sizeof(silentNight_mel) / sizeof(silentNight_mel[0])
};