#include <Arduino.h>
#include <Tone.h>
#include "Tune.h"
#include "songs/tunes.h"

#define INPUT_PIN 3
// The base note duration
#define BASE_NOTE_LENGTH 100

Tone tone1;
Tone tone2;

volatile bool tickRequest = false;
unsigned long lastDebounceMicros = 0;
const unsigned long debounceMicros = 20000;
volatile bool firstNote = true;

const Tune* currentTune;
const Tune* allTunes[] = {
  &GodRest_Tune,
  &JingleBells_Tune,
  &WeWish_Tune,
  &SilentNight_Tune,
  &Snow_Tune,
};
const int numTunes = sizeof(allTunes) / sizeof(allTunes[0]);

int currentNote = 0;
int ticksIntoNote = 0;
int arraySize = 0;

void assignTune();
void startNote(int index);
void onTick();

void setup() {
  tone1.begin(8);
  tone2.begin(9);

  pinMode(INPUT_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(INPUT_PIN), onTick, RISING);
  assignTune();
}

void loop() {
  if (!tickRequest) return;
  tickRequest = false;

  if (firstNote) {
    startNote(0);
    firstNote = false;
    return;
  }

  ticksIntoNote++;

  // If enough ticks have passed that we should increment the note, do so
  if (ticksIntoNote >= currentTune->lengths[currentNote]) {
    currentNote++;
    ticksIntoNote = 0;

    if (currentNote >= arraySize) {
      currentNote = 0;
      assignTune();
    }

    startNote(currentNote);
  }
}

void assignTune() {
  randomSeed(analogRead(A0));
  int idx = random(numTunes);
  currentTune = allTunes[idx];
  arraySize = currentTune->size;
}

void onTick() {
  unsigned long now = micros();
  if (now - lastDebounceMicros < debounceMicros) return;
  lastDebounceMicros = now;

  tickRequest = true;
}

void startNote(int index) {
  tone1.stop();
  tone2.stop();

  tone1.play(currentTune->melody[index], BASE_NOTE_LENGTH * currentTune->lengths[index]);
  tone2.play(currentTune->harmony[index], BASE_NOTE_LENGTH * currentTune->lengths[index]);
}