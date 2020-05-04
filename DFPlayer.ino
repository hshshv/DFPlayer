#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"//you need to download this

#define TX 2
#define RX 3

SoftwareSerial SOS(RX, TX);
DFRobotDFPlayerMini Player;

void setup() 
{
  Serial.begin(9600);//לא נחוץ
  SOS.begin(9600);
  Player.begin(SOS);
  if(Player.begin(SOS))//הצליח להתחיל את הנגן
  {
    Serial.println("it is fine");
  }
  else
  {
    Serial.println("XXXXX");
  }
  Player.volume(30); // 0 - 30
}

void loop() 
{
  Player.play(0);//the first file you copied to the card.
}
