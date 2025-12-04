#include "jinglebells.h"
#include "Tone.h"

static const int jingle_mel[] = {
  NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_G4, NOTE_C4, NOTE_D4, NOTE_E4,
  NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_G4,
  NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_G4, NOTE_C4, NOTE_D4, NOTE_E4,

  NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4,
  NOTE_G4, NOTE_G4, NOTE_F4, NOTE_D4, NOTE_C4
};

static const int jingle_har[] = {
  NOTE_C3, NOTE_C3, NOTE_C3,
  NOTE_C3, NOTE_C3, NOTE_C3,
  NOTE_C3, NOTE_G2, NOTE_G2, NOTE_B2, NOTE_C4,
  NOTE_A2, NOTE_A2, NOTE_C3, NOTE_C3, NOTE_G2, NOTE_G2, NOTE_C3,
  NOTE_G2, NOTE_G2, NOTE_B2, NOTE_B2, NOTE_G2, NOTE_B2,
  NOTE_C3, NOTE_C3, NOTE_C3,
  NOTE_C3, NOTE_C3, NOTE_C3,
  NOTE_C3, NOTE_G2, NOTE_G2, NOTE_B2, NOTE_C4,
  NOTE_A2, NOTE_A2, NOTE_C3, NOTE_C3, NOTE_G2, NOTE_G2, NOTE_C3,
  NOTE_G2, NOTE_G2, NOTE_A2, NOTE_B2, NOTE_C3,
};

static const int jingle_len[] = {
  1,1,2,
  1,1,2,
  1,1,1,1,4,
  1,1,1,1,1,1,2,
  1,1,1,1,2,2,
  1,1,2,
  1,1,2,
  1,1,1,1,4,
  1,1,1,1,1,1,2,
  1,1,1,1,4
};

const Tune JingleBells_Tune = {
  jingle_mel,
  jingle_har,
  jingle_len,
  sizeof(jingle_mel) / sizeof(jingle_mel[0])
};