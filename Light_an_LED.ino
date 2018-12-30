int THRESHOLD = 190;
int inputval;
void setup() {
  pinMode(8,OUTPUT);
  pinMode(A0,INPUT);
  digitalWrite(8,LOW);
  // put your setup code here, to run once:

}

void loop() {
  
  inputval = analogRead(A0);
  if(inputval<THRESHOLD){
    digitalWrite(8,HIGH);
  }
  else{
    digitalWrite(8,LOW);
  }
  // put your main code here, to run repeatedly:

}
