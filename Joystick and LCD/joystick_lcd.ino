/* 2024-11-02
*  Spencer Vallis
*  Apache License 3.0 
*  Have some fun
*/ 

#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

const int SW_PIN = 2; // digital pin connected to switch output
const int X_PIN = 0; // analog pin connected to X output
const int Y_PIN = 1; // analog pin connected to Y output

void setup() {
  lcd.begin(16, 2);
  lcd.print("Joystick Module");
}

void loop() {
  lcd.setCursor(0, 1);

  if(analogRead(X_PIN) < 300) {
    lcd.clear();
    lcd.print("Joystick Module");
    lcd.setCursor(0, 1);
    lcd.print("Right");
    delay(2500);
  }

  if(analogRead(X_PIN) > 750) {
    lcd.clear();
    lcd.print("Joystick Module");
    lcd.setCursor(0, 1);
    lcd.print("Left");
    delay(2500);
  }

  if(analogRead(Y_PIN) < 300) {
    lcd.clear();
    lcd.print("Joystick Module");
    lcd.setCursor(0, 1);
    lcd.print("Down");
    delay(2500);
  }

  if(analogRead(Y_PIN) > 750) {
    lcd.clear();
    lcd.print("Joystick Module");
    lcd.setCursor(0, 1);
    lcd.print("Up");
    delay(2500);
  }

  if((analogRead(Y_PIN) <= 600 && analogRead(Y_PIN) >= 400) && (analogRead(X_PIN) <= 600 && analogRead(X_PIN) >= 400)) {
    lcd.clear();
    lcd.print("Joystick Module");
  }
}
