int d;   // to store on or off value
void setup()
{
  pinMode(8,INPUT);
  pinMode(13,OUTPUT);

}
void loop()
{
d=digitalRead(8);
if(d==0)
{digitalWrite(13,HIGH);}
else
{digitalWrite(13,LOW);}
}


