void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  //fast
  for(int i=0;i<5;i++){
    digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
  }
  //slow
  for(int i=0;i<5;i++){
    digitalWrite(13,HIGH);
  delay(2000);
  digitalWrite(13,LOW);
  delay(2000);
  }
}