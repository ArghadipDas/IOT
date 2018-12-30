#include<EEPROM.h>

char read_s[4] = {'r','e','a','d'};
char write_s[5] = {'w','r','i','t','e'} ;
char readbuff[10];
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int bytenum,read_flag = 0,write_flag = 0;
  bytenum = Serial.available();
  if(bytenum > 0 ){
    Serial.readBytes(readbuff,10);
    for(int i=0;i<5;i++)
    {
      if(readbuff[i] == read_s[i])
      {
        read_flag += 1;
      }
      else if(readbuff[i] == write_s[i])
      {
        write_flag += 1;
      }
    }
    if(read_flag == 4)
    {
      Serial.write(EEPROM.read(readbuff[5]));
    }
    else if(write_flag == 5)
    {
      EEPROM.write(readbuff[6],readbuff[8]);
    }
  }
  
  
  // put your main code here, to run repeatedly:

}
