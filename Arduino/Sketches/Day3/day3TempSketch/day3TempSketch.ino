//Author : Team LearnIt
void setup() {
  Serial.begin(9600);
}
void loop() {
  int val = analogRead(A0);
  int vol = map(val, 0, 1023, 0, 5000);
  float temp = vol / 10;
  Serial.println("room temp is");
  Serial.println(temp);
  delay(1000);
}



