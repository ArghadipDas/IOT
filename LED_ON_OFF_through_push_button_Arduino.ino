void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  digitalWrite(13,LOW);
  // put your setup code here, to run once:

}

void loop() {
  int bytenum = Serial.available();
  if(bytenum>0)
  {
    char bval = Serial.read();
    if(bval == '1')
    {
      digitalWrite(13,HIGH);
    }
    else if(bval == '0')
    {
      digitalWrite(13,LOW);
    }
  }
  // put your main code here, to run repeatedly:

}
