int tiraled1 = 1;
int tiraled2 = 2;
int tiraled3 = 3;

int sensor1 = 4;
int valsensor1 = 0;
int sensor2 = 5;
int valsensor2 = 0;
int sensor3 = 6;
int valsensor3 = 0;

void setup() {
pinMode(tiraled1,OUTPUT);  
pinMode(tiraled2,OUTPUT);
pinMode(tiraled3,OUTPUT);

pinMode(sensor1,INPUT);
pinMode(sensor2,INPUT);
pinMode(sensor3,INPUT);

}

void loop() {
 valsensor1 = digitalRead(sensor1);
 if( valsensor1 == HIGH){
 digitalWrite(tiraled1,HIGH);
 digitalWrite(tiraled2,HIGH);
digitalWrite(tiraled3,HIGH);
delay(150);
 digitalWrite(tiraled1,LOW);
  digitalWrite(tiraled2,LOW);
  digitalWrite(tiraled3,LOW);
}
 
valsensor2 = digitalRead(sensor2);
if( valsensor2 == HIGH){
 digitalWrite(tiraled1,HIGH);
 digitalWrite(tiraled2,HIGH);
digitalWrite(tiraled3,HIGH);
delay(150);
  digitalWrite(tiraled1,LOW);
  digitalWrite(tiraled2,LOW);
  digitalWrite(tiraled3,LOW);
}

valsensor3 = digitalRead(sensor3);
if( valsensor3 == HIGH){
 digitalWrite(tiraled1,HIGH);
 digitalWrite(tiraled2,HIGH);
digitalWrite(tiraled3,HIGH);
delay(150);
  digitalWrite(tiraled1,LOW);
  digitalWrite(tiraled2,LOW);
  digitalWrite(tiraled3,LOW);
}
}
