#include <Arduino.h>
#include "definitions.h"


int readButtons() {
  int adc_key_in = analogRead(0);

  if (adc_key_in > 1000) return BtnNone;
  if (adc_key_in < 50) return BtnRight;
  if (adc_key_in < 250) return BtnUp;
  if (adc_key_in < 450) return BtnDown;
  if (adc_key_in < 650) return BtnLeft;
  if (adc_key_in < 850) return BtnSelect;

  return BtnNone;
}


