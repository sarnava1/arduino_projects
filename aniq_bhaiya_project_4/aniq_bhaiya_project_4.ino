int d;
int redpin=2;
int yellowpin=4;
int greenpin=6;
int count=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redpin,OUTPUT);
  pinMode(yellowpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  digitalWrite(redpin,LOW);
  digitalWrite(yellowpin,LOW);
  digitalWrite(greenpin,LOW);
  pinMode(8,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  d=digitalRead(8);
  Serial.println("hello world");
  Serial.println(count);
  if(d==0)
  {
  digitalWrite(13,HIGH);
  count++;
  Serial.println(count);
  Serial.println("hello world");
  }
 else
  {
  digitalWrite(13,LOW);
  }

if(count>=0&&count<=5){
  digitalWrite(redpin,HIGH);
    digitalWrite(yellowpin,LOW);
    digitalWrite(greenpin,LOW);
 
}
else if(count>5&&count<=7){
  digitalWrite(redpin,LOW);
    digitalWrite(yellowpin,HIGH);
    digitalWrite(greenpin,LOW);
 
}
else
{
    digitalWrite(redpin,LOW);
    digitalWrite(yellowpin,LOW);
    digitalWrite(greenpin,HIGH);
 
}
}
