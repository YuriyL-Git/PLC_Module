#include <Arduino.h>
#include "lcd_shield/lcd_shield.h"
#include "definitions.h"


void setup() {
  lcd.print("test");
}

void loop() {
  lcd.setCursor(0, 1);
  int lcd_key = readButtons();

  switch (lcd_key) {
    case BtnRight: {
      lcd.print("RIGHT ");
      break;
    }
    case BtnLeft: {
      lcd.print("LEFT   ");
      break;
    }
    case BtnUp: {
      lcd.print("UP    ");
      break;
    }
    case BtnDown: {
      lcd.print("DOWN  ");
      break;
    }
    case BtnSelect: {
      lcd.print("SELECT");
      break;
    }
    case BtnNone: {
      lcd.print("NONE  ");
      break;
    }
  }
}

