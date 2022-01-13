#include <Arduino.h>
#include <LiquidCrystal.h>
#include <Wire.h>

//affectation de broches

const int RS = 9, En = 8, d4 = 6, d5 = 5, d6 = 4,d7 = 3;
LiquidCrystal lcd(RS, En, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("Ry : ");
lcd.print(analogRead(A0));
delay(100);

lcd.setCursor(0,1);
lcd.print("Rx : ");
lcd.print(analogRead(A1));
delay(100);

lcd.clear();
}

 if (Bouton==1)
 {
Serial.println("bouton poussoir relaché");
}
else
{
serial.println("bouton poussoir actif");
}
  delay(500);

lcd.setCursor(0,0);
lcd.print("Ry : ");
lcd.print(analogRead(A1));
delay(10000);

lcd.setCursor(0,1)
lcd.print("Rx : ");
lcd.print(analogRead(A0));
delay(10000);

lcd.clear();
}
