#include <SoftwareSerial.h> 
SoftwareSerial jutsu(11,10); 
int LED1 = 12, LED2 = 13;

#define R2 8
#define R1 7
#define L1 2
#define L2 3

void setup() 
{   
 Serial.begin(9600); 
 jutsu.begin(9600); 
 pinMode(LED1, OUTPUT);
 pinMode(LED2, OUTPUT); 
 pinMode (R1, OUTPUT);
 pinMode (R2, OUTPUT);
 pinMode (L1, OUTPUT);
 pinMode (L2, OUTPUT);
 pinMode (13,OUTPUT);
 pinMode (12,OUTPUT);
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

void Flying_thunder()
{digitalWrite (L1, HIGH);
digitalWrite (L2, LOW);
digitalWrite (R2, LOW);
digitalWrite (R1, HIGH);
  }

void Teleportation()
{
digitalWrite (L1, LOW);
digitalWrite (L2, HIGH);
digitalWrite (R2, HIGH);
digitalWrite (R1, LOW);
}

void Shunshin()
{digitalWrite (L1, HIGH);
digitalWrite (L2, LOW);
digitalWrite (R2, HIGH);
digitalWrite (R1, LOW);
  }

void Body_flicker()
{
digitalWrite (L1, LOW);
digitalWrite (L2, HIGH);
digitalWrite (R2, LOW);
digitalWrite (R1, HIGH);
}

void Infinite_tsukuyomi()
{
digitalWrite (L1, LOW);
digitalWrite (L2, LOW);
digitalWrite (R2, LOW);
digitalWrite (R1, LOW);
}

void Kamaitachi()
{
digitalWrite (L1, HIGH);
digitalWrite (L2, LOW);
digitalWrite (R2, HIGH);
digitalWrite (R1, LOW);
}

void Rasengan()
{
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
  }
