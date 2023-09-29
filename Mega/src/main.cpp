#include <Arduino.h>
#include "lcd_shield/lcd_shield.h"
#include "definitions.h"


void setup() {
  Serial.begin(9600);
  lcd.print("test");
}

void loop() {
  lcd.setCursor(0, 1);
  int lcd_key = readButtons();


  switch (lcd_key) {
    case BtnRight: {
      Serial.println("RIGHT ");
      lcd.print("RIGHT ");
      break;
    }
    case BtnLeft: {
      Serial.println("LEFT   ");
      lcd.print("LEFT   ");
      break;
    }
    case BtnUp: {
      Serial.println("UP   ");
      lcd.print("UP    ");
      break;
    }
    case BtnDown: {
      Serial.println("DOWN   ");
      lcd.print("DOWN  ");
      break;
    }
    case BtnSelect: {
      Serial.println("SELECT   ");
      lcd.print("SELECT");
      break;
    }
    case BtnReset: {
      lcd.print("Reset");
      break;
    }
    case BtnNone: {
      Serial.println("NONE   ");
      lcd.print("NONE  ");
      break;
    }
  }
}

