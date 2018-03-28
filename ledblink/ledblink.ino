int pin1=9;
int pin2=10;
int greenWaitTimeOn=200;
int greenWaitTimeOff=200;
int yellowWaitTimeOn=200;
int yellowWaitTimeOff=200;
int noOfGreenBlink;
int noOfYellowBlink;

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   Serial.println("how many times do you want the green led to blink : ");
   while(Serial.available()==0){}
   noOfGreenBlink=Serial.parseInt();

   Serial.println("how many times do you want the yellow led to blink : ");
   while(Serial.available()==0){}
   noOfYellowBlink=Serial.parseInt();

   pinMode(pin1,OUTPUT);
   pinMode(pin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("the green led is blinking : ");
  for(int i=1;i<=noOfGreenBlink;i++){
  //Serial.println("the green led is blinking no : ");
  //Serial.println(i);
  digitalWrite(pin1,HIGH);
  delay(greenWaitTimeOn);
  digitalWrite(pin1,LOW);
  delay(greenWaitTimeOff);
  }
  //Serial.println("");
  for(int i=1;i<=noOfYellowBlink;i++){
  digitalWrite(pin2,HIGH);
  delay(yellowWaitTimeOn);
  digitalWrite(pin2,LOW);
  delay(yellowWaitTimeOff);
  }
}


