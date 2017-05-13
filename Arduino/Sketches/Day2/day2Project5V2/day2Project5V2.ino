//Author : LearnIt Team
/*
 * swith on led when btn is pressed and 
 * switch off the led when btn is pressed second time
 */
int led = 13;
int btn = 2;
int btnVal;
int btnPushCounter;
int lastBtnVal = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  btnVal = digitalRead(btn);
  
  if (btnVal != lastBtnVal) {
    if(btnVal == HIGH){
      btnPushCounter = btnPushCounter + 1;
    }
    delay(50);
  }
  
  lastBtnVal = btnVal;

  if(btnPushCounter % 2 == 0){
    digitalWrite(led,LOW);
  }else{
    digitalWrite(led,HIGH);
  }
}



