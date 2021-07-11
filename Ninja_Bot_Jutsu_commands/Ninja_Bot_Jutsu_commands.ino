#include <SoftwareSerial.h> 
SoftwareSerial jutsu(11,10); 
int LED1 = 12, LED2 = 13;

#define base 150

#define R2 9
#define R1 6
#define L1 5
#define L2 3

boolean f = false;

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
 
 switch(flag)
 {
  case 'F': Flying_thunder();
            delay(1000);
            break;
  case 'R': Shunshin();
            delay(1000);
            Infinite_tsukuyomi();
            break;
  case 'L': Body_flicker();
            delay(1000);
            Infinite_tsukuyomi();
            break;
  case 'S': Infinite_tsukuyomi();
            delay(1000);
            break;
  case 'T': Teleportation();
            delay(1000);
            break;  
  
  case 'H': f=!f;
  default : Infinite_tsukuyomi();
 }
 Serial.println(flag);
 Rasengan();

}
  
}

void Flying_thunder()
{
analogWrite (L1, base);
digitalWrite (L2, LOW);
digitalWrite (R2, LOW);
analogWrite(R1, base);
}

void Teleportation()
{
analogWrite (L2, base);
digitalWrite (L1, LOW);
digitalWrite (R1, LOW);
analogWrite(R2, base);
}

void Shunshin()
{
analogWrite (L1, base);
digitalWrite (L2, LOW);
analogWrite (R2, base);
digitalWrite (R1, LOW);
}

void Body_flicker()
{
digitalWrite (L1, LOW);
analogWrite (L2, base);
digitalWrite (R2, LOW);
analogWrite (R1, base);
}

void Infinite_tsukuyomi()
{
analogWrite (L1, 0);
analogWrite (L2, 0);
analogWrite (R2, 0);
analogWrite (R1, 0);
}

void Rasengan()
{
digitalWrite (LED1, f);
digitalWrite (LED2, f);
  }
