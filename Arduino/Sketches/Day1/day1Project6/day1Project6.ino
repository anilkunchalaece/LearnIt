// Author : LearnIt team
int A = 12;
int B = 5;

void setup() {
  int C;
  Serial.begin(9600);
  Serial.print(" A value is -> ");
  Serial.print(A);
  Serial.print(" B value is -> ");
  Serial.print(B);
  Serial.print(" C value is -> ");
  Serial.println(C);

  int sum = A + B;
  Serial.print("A+B  -> ");
  Serial.println(sum);

  int diff = A - B;
  Serial.print("A-B -> ");
  Serial.println(diff);

  int mul = A * B;
  Serial.print("A*B -> ");
  Serial.println(mul);

  int divi = A / B;
  Serial.print("A/B -> ");
  Serial.println(divi);

  int modulo = A % B;
  Serial.print("A%B -> ");
  Serial.println(modulo);
}

void loop() {

}




