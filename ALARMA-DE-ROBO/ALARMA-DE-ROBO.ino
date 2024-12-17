#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);

int sensor = 9;
int estadosensor = 0;
int ALARMA = 8;
int PULSADOR = A0;
int estadopulsador = 0;

void setup() {
  lcd.begin(16,2);
 pinMode(ALARMA,OUTPUT);
  pinMode(PULSADOR,INPUT);
  pinMode(sensor,INPUT);
  lcd.setCursor(0,0);
}

void loop(){
estadosensor = digitalRead(sensor);
if( estadosensor == HIGH){
  lcd.print("INVASION");
  delay(500);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,HIGH);
  delay(1000);
}
  estadopulsador = digitalRead(PULSADOR);
  if( estadopulsador == HIGH){
    lcd.clear();
    digitalWrite(8,LOW);
  delay(50);
  estadopulsador == LOW;
  }
}
