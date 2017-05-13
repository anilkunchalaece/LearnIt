//Author : Team LearnIt
int ledPin = 12;
void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for (int val = 25 ; val < 255; val = val + 25) {
    analogWrite(ledPin, val);
    delay(500);
  }
}



