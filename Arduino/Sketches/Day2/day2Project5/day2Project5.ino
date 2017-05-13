//Author : LearnIt Team
/*
 * pushbutton and Bulit in led
 */
int led = 13;
int btn = 2;
int btnVal;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  btnVal = digitalRead(btn);
  
  if (btnVal == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}



