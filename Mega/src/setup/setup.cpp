#include <Arduino.h>
#include "lcd_shield/lcd_shield.h"
#include "settings/settings.h"

void setupBoard() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  getSettings();
};