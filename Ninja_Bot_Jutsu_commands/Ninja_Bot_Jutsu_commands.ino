#include <SoftwareSerial.h> 
SoftwareSerial jutsu(11,10); 


void setup() 
{   
 Serial.begin(9600); 
 jutsu.begin(9600); 
} 

char flag = 0;

String sent = "";

void loop() 
{ 
while (jutsu.available())

{
  delay (1);
   flag = jutsu.read(); 
   sent = sent+flag;

}
  if (sent.length() > 0)
  {
    Serial.println (sent);
    sent = "";
  }
}
