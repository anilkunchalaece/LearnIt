//Author : Team LearnIt
/*
 * RGB Led using analogWrite
 * 
 */
int rLed = 11;
int gLed = 10;
int bLed = 9;

void setup() {
  pinMode(rLed, OUTPUT);
  pinMode(gLed, OUTPUT);
  pinMode(bLed, OUTPUT);
}

void loop() {
  for (int br = 0; br < 200 ; br = br + 10) {
    analogWrite(rLed, br);
    delay(1000);
    analogWrite(gLed, br);
    delay(1000);
    analogWrite(bLed, br);
    delay(1000);
  }
}



