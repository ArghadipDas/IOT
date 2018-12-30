void setup() {
  pinMode(6,OUTPUT);
  digitalWrite(6,LOW);
  // put your setup code here, to run once:

}

void loop() {
  int i;
  for (i=0;i<256;i++)
  {
    analogWrite(6,i);
    delay(3.9);
  }
  for(i=255;i>=0;i++)
  {
    analogWrite(6,i);
    delay(3.9);
  }
  // put your main code here, to run repeatedly:

}
