// Author : LearnIt team
int A=12,B=13,C=12;
void setup() {
  Serial.begin(9600);
  Serial.print("A==A    is ");
  Serial.println(A==A);
  Serial.print("A==B    is ");
  Serial.println(A==B);
 
  Serial.print("A!=A    is ");
  Serial.println(A!=A);
  Serial.print("A!=B    is ");
  Serial.println(A!=B);

  Serial.print("A<B     is ");
  Serial.println(A<B);
  Serial.print("C>B     is ");
  Serial.println(C>B);
  
  Serial.print("A<=B    is ");
  Serial.println(A<=B);

  Serial.print("B<=B    is ");
  Serial.println(B<=B);

  Serial.print("A=B     is ");
  Serial.println(A=B);
}
void loop() {
}




