void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  int value;
  value = digitalRead(12);
  if(value == 0)
  {
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    delay(1000);
  }
  else 
  //if(value == 5)
  {
    digitalWrite(13,HIGH);
  }
  // put your main code here, to run repeatedly:

}
