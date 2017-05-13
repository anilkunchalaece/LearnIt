//Author : LearnIt Team
int delayVal;
void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  for (int i = 50 ; i < 1000 ; i = i + 50) {
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    delay(i);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    delay(i);
    Serial.print("the i value is");
    Serial.println(i);
  }

}



