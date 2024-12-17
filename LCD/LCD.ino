#include <LiquidCrystal.h> 

#define pinSensor A0  // pinSensor conectado al pin A0

int AnalogPin = A0; //  valor analogico
float milivolts = 0;  
float celsius = 0; // valor Grados 

LiquidCrystal lcd(7,6,5,4,3,2); 
void setup() {
  
lcd.begin(16,2);  

}

void loop() {
  
AnalogPin = analogRead(pinSensor); // lee el pin analógico A0

lcd.println(AnalogPin); 

milivolts = (AnalogPin / 1023.0) * 5000; // Division del valor por 1023 que es la resolucion del convesor analogico digital

celsius = milivolts / 10; 

lcd.setCursor(0,0); //muestra el valor en el lcd
lcd.print("TEMPERATURA ");
  delay(1000);
lcd.setCursor(1,1);
  lcd.print(celsius);
lcd.print("C");
delay(1000);
}
