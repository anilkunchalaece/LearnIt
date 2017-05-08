//Author : LearnIt Team
int delayVal = 1000;
void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);
  delay(delayVal);
  digitalWrite(12, LOW);
  delay(delayVal);

  digitalWrite(11, HIGH);
  delay(delayVal);
  digitalWrite(11, LOW);
  delay(delayVal);

  digitalWrite(10, HIGH);
  delay(delayVal);
  digitalWrite(10, LOW);
  delay(delayVal);

}





