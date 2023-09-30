#include <Arduino.h>
#include "settings/settings.h"
#include "definitions/definitions.h"
#include "LiquidCrystal.h"

LiquidCrystal lcd = LiquidCrystal(8, 9, 4, 5, 6, 7);


int readButtons() {
  int adc_key_in = analogRead(0);
  int resetPin = analogRead(1);

  if (resetPin < 2 && adc_key_in > 50) return BtnReset;
  if (adc_key_in > 1000) return BtnNone;
  if (adc_key_in < 50) return BtnRight;
  if (adc_key_in < 250) return BtnUp;
  if (adc_key_in < 450) return BtnDown;
  if (adc_key_in < 650) return BtnLeft;
  if (adc_key_in < 850) return BtnSelect;

  return BtnNone;
}


