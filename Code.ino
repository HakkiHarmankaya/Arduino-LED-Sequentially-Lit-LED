int led[] = {4,5,6,7,8,9,10,11};
void setup() 
{
  for(int i=0; i<8; i++)
  {
    pinMode(led[i], OUTPUT);
  }
}
void loop() 
{
  for (int i = 11; i > 3; i--)
  {
    digitalWrite(i, 1);
    delay(100);
    digitalWrite(i, 0);
    delay(100);
  }
   
  for (int i = 4; i < 12; i++)
  {
    digitalWrite(i, 1);
    delay(100);
    digitalWrite(i, 0);
    delay(100);
  }
}
