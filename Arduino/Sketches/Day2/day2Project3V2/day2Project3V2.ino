//Author : Team LearnIt
int rLed = 11;
int gLed = 10;
int bLed = 9;
void setup() {
pinMode(rLed,OUTPUT);
pinMode(gLed,OUTPUT);
pinMode(bLed,OUTPUT);
}

void loop() {
  digitalWrite(rLed,HIGH);
  digitalWrite(gLed,HIGH);
  digitalWrite(bLed,LOW);
  delay(1000);
  
  digitalWrite(rLed,LOW);
  digitalWrite(gLed,HIGH);
  digitalWrite(bLed,HIGH);
  delay(1000);
  
  digitalWrite(rLed,HIGH);
  digitalWrite(gLed,LOW);
  digitalWrite(bLed,HIGH);
  delay(1000);

}




