#include <Wire.h>

  #define expansor1 0x38
  #define expansor2 0x39

int player_1=0;

void setup()
{
  Wire.begin();
  comunica(expansor1, 0xFF);
  comunica(expansor2, 0xFF);
}

void loop()
{ //(g,f,a,b,e,d,c,ponto)
  
  if (player_1==0)
  {
  comunica(expansor1,B10000001);
  }

  if (player_1==1)
  {
  comunica(expansor1,B11101101);
  }

  if (player_1==2)
  {
  comunica(expansor1,B01000011);
  }

  if (player_1==3)
  {
  comunica(expansor1,B01001001);
  }

  if (player_1==4)
  {
  comunica(expansor1,B00101101);
  }

  if (player_1==5)
  {
  comunica(expansor1,B00011001);
  }

  if (player_1==6)
  {
  comunica(expansor1,B00010001);
  }

  if (player_1==7)
  {
  comunica(expansor1,B11001101);
  }

  if (player_1==8)
  {
  comunica(expansor1,0x01);
  }

  if (player_1==9)
  {
  comunica(expansor1,B00001001);
  }
  
  
}

void comunica(byte endereco, byte digito)
{
  Wire.beginTransmission(endereco);
  Wire.write(digito);
  Wire.endTransmission();
}

