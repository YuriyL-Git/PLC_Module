#include <Arduino.h>
#include "lcd_shield/lcd_shield.h"
#include "settings/settings.h"
#include "definitions/definitions.h"
#include "setup/setup.h"


void setup() {
  setupBoard();
}

void loop() {
  lcd.setCursor(0, 1);
  int lcd_key = readButtons();
  lcd.print("temp " + String(settings.temperature));


  switch (lcd_key) {
    case BtnRight: {
      Serial.println("RIGHT ");

      lcd.print("RIGHT ");

      lcd.setCursor(2, 0);
      settings.temperature = settings.temperature + 1;
      lcd.print("tem " + String(settings.temperature));
      break;
    }
    case BtnLeft: {
      //Serial.println("LEFT   ");
      lcd.print("LEFT   ");
      break;
    }
    case BtnUp: {
      //  Serial.println("UP   ");
      lcd.print("UP    ");
      break;
    }
    case BtnDown: {
      //   Serial.println("DOWN   ");
      lcd.print("DOWN  ");
      break;
    }
    case BtnSelect: {
      // Serial.println("SELECT   ");
      lcd.print("SELECT");
      break;
    }
    case BtnReset: {
      lcd.print("Reset");
      break;
    }
    case BtnNone: {
      //   Serial.println("NONE   ");
      // lcd.print("NONE  ");
      break;
    }
  }
}

