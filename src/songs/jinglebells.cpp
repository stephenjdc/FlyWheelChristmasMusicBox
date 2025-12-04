#include "jinglebells.h"
#include "Tone.h"

//
// Melody (Jingle Bells)
//
static const int jingle_mel[] = {

  // ----- Verse: "Dashing through the snow..." -----
  NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_G4, NOTE_C4, NOTE_D4, NOTE_E4,

  NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_G4,

  // ----- Chorus: "Jingle Bells, Jingle Bells..." -----
  NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_G4, NOTE_C4, NOTE_D4, NOTE_E4,

  NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4,
  NOTE_G4, NOTE_G4, NOTE_F4, NOTE_D4, NOTE_C4
};

//
// Harmony (bass / chords)
//
static const int jingle_har[] = {

  // Verse bass movement approximated for 2-voice style
  NOTE_C3, NOTE_C3, NOTE_C3,
  NOTE_C3, NOTE_C3, NOTE_C3,
  NOTE_C3, NOTE_G2, NOTE_G2, NOTE_B2, NOTE_C4,

  NOTE_A2, NOTE_A2, NOTE_C3, NOTE_C3, NOTE_G2, NOTE_G2, NOTE_C3,
  NOTE_G2, NOTE_G2, NOTE_B2, NOTE_B2, NOTE_G2, NOTE_B2,

  // Chorus harmony
  NOTE_C3, NOTE_C3, NOTE_C3,
  NOTE_C3, NOTE_C3, NOTE_C3,
  NOTE_C3, NOTE_G2, NOTE_G2, NOTE_B2, NOTE_C4,

  NOTE_A2, NOTE_A2, NOTE_C3, NOTE_C3, NOTE_G2, NOTE_G2, NOTE_C3,
  NOTE_G2, NOTE_G2, NOTE_A2, NOTE_B2, NOTE_C3,
};

//
// Lengths (tick-based, matching your style: 1=short, 3=long)
//
static const int jingle_len[] = {

  // Verse
  1,1,2,
  1,1,2,
  1,1,1,1,4,

  1,1,1,1,1,1,2,
  1,1,1,1,2,2,

  // Chorus
  1,1,2,
  1,1,2,
  1,1,1,1,4,

  1,1,1,1,1,1,2,
  1,1,1,1,4        // final note longer
};

//
// Construct Tune
//
const Tune JingleBells_Tune = {
  jingle_mel,
  jingle_har,
  jingle_len,
  sizeof(jingle_mel) / sizeof(jingle_mel[0])
};