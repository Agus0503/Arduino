#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);

int PulsadorA = 11;
int PulsadorB = 12;
int val=0;

void setup() {
  lcd.begin(16,2);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
}

void loop() {
  val = digitalRead(PulsadorA);
if(digitalRead(11)== HIGH){
  lcd.setCursor(0,0);
  lcd.print("BOTON 1");
  delay(500);
  lcd.clear();
}

val = digitalRead(PulsadorB);
if (digitalRead(12)==HIGH){
  lcd.setCursor(0,1);
  lcd.print("BOTON 2");
  delay (500);
  lcd.clear();
}
}
