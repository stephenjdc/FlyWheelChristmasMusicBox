#pragma once
#include <Arduino.h>

struct Tune {
  const int* melody;
  const int* harmony;
  const int* lengths;
  int size;
};