void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //ALTHOUGH LOOKING AT THE LD CUBE IT MAY SEEM A DAUNTING TASK TO CODE BUT THE CODE IS VERY SIMPLE
  //I HAVE JUST SWITCHED ON AND OFF THE PINS AT DIFFERENT PATTERNS AND WE GRT THIS BRILLIANT PATTERNS
  //IT IS ALSO THAT THE DELAY TIME I HAVE USED IS 50 MILISEC WHICH IN A WAY IS CONTRIBUTING TO THE PATTER DUE TO THE PHENOMENON OF PERSISTENCE OF VISION
  //THE REAL HARD WORK WAS ON SOLDERING THE LEDS TOGETHER
  //3*3*3 LED CUBE IS EASY
  //8*8*8 REQUIRES A LOT MORE EFFORT AND THERE U GET TO USE A LOT OF TOOLS LIKE:
  //1.MULTIPLEXER
  //2.512 LEDS
  //3.NPN TRANSISTORS
  //4.RESISTORS
  //5.SMPS
  //6.PERFORATED BOARDS
  //PATTERN 1
 digitalWrite(13,HIGH);
 delay(50);
 digitalWrite(12,HIGH);
 delay(50);
 digitalWrite(11,HIGH);
 delay(50);
 digitalWrite(10,HIGH);
 delay(50);
 digitalWrite(9,HIGH);
 delay(50);
 digitalWrite(8,HIGH);
 delay(50);
 digitalWrite(7,HIGH);
 delay(50);
 digitalWrite(6,HIGH);
 delay(50);
 digitalWrite(5,HIGH);
 delay(50);
digitalWrite(5,0);
 delay(50);
 digitalWrite(6,0);
 delay(50);
 digitalWrite(7,0);
 delay(50);
 digitalWrite(8,0);
 delay(50);
 digitalWrite(9,0);
 delay(50);
 digitalWrite(10,0);
 delay(50);
 digitalWrite(11,0);
 delay(50);
 digitalWrite(12,0);
 delay(50);
 digitalWrite(13,0);
 delay(200);
 //pattern2
 digitalWrite(13,HIGH);
delay(50);
digitalWrite(12,HIGH);
delay(50);
digitalWrite(11,HIGH);
delay(50);
digitalWrite(10,HIGH);
delay(50);
digitalWrite(9,HIGH);
delay(50);
digitalWrite(8,HIGH);
delay(50);
digitalWrite(7,HIGH);
delay(50);
digitalWrite(6,HIGH);
delay(50);
digitalWrite(5,HIGH);
delay(50);
digitalWrite(13,0);
digitalWrite(12,0);
digitalWrite(11,0);
digitalWrite(10,0);
digitalWrite(9,0);
digitalWrite(8,0);
digitalWrite(7,0);
digitalWrite(6,0);
digitalWrite(5,0);
delay(200);
//PATTERN3
 digitalWrite(13,HIGH);
//delay(100);
digitalWrite(12,HIGH);
//delay(100);
digitalWrite(11,HIGH);
//delay(100);
digitalWrite(10,HIGH);
//delay(100);
digitalWrite(9,HIGH);
//delay(100);
digitalWrite(8,HIGH);
//delay(100);
digitalWrite(7,HIGH);
//delay(100);
digitalWrite(6,HIGH);
//delay(100);
digitalWrite(5,HIGH);
delay(50);
digitalWrite(13,0);
digitalWrite(12,0);
digitalWrite(11,0);
digitalWrite(10,0);
digitalWrite(9,0);
digitalWrite(8,0);
digitalWrite(7,0);
digitalWrite(6,0);
digitalWrite(5,0);
delay(200);
//pattern4
 digitalWrite(13,HIGH);
//delay(100);
digitalWrite(12,HIGH);
//delay(100);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
//delay(100);
digitalWrite(9,HIGH);
//delay(100);
digitalWrite(8,HIGH);
//delay(100);
delay(200);
digitalWrite(13,0);
digitalWrite(12,0);
digitalWrite(11,0);
 digitalWrite(7,HIGH);
//delay(100);
digitalWrite(6,HIGH);
//delay(100);
digitalWrite(5,HIGH);

//delay(100);
delay(50);
digitalWrite(10,0);
digitalWrite(9,0);
digitalWrite(8,0);
 digitalWrite(13,HIGH);
//delay(100);
digitalWrite(12,HIGH);
//delay(100);
digitalWrite(11,HIGH);
delay(50);
digitalWrite(7,0);
digitalWrite(6,0);
digitalWrite(5,0);
//pattern5
digitalWrite(13,HIGH);
delay(50);
 digitalWrite(13,LOW);
delay(50);
 digitalWrite(12,HIGH);
delay(50);
 digitalWrite(12,LOW);
delay(50);
 digitalWrite(11,HIGH);
delay(50);
 digitalWrite(11,LOW);
delay(50);
 digitalWrite(10,HIGH);
delay(50);
 digitalWrite(10,LOW);
delay(50);
 digitalWrite(9,HIGH);
delay(50);
 digitalWrite(9,LOW);
delay(50);
 digitalWrite(8,HIGH);
delay(50);
 digitalWrite(8,LOW);
delay(50);
digitalWrite(7,HIGH);
delay(50);
 digitalWrite(7,LOW);
delay(50);digitalWrite(6,HIGH);
delay(50);
 digitalWrite(6,LOW);
delay(50);digitalWrite(5,HIGH);
delay(50);
 digitalWrite(5 ,LOW);
delay(200);
//pattern6
  digitalWrite(13,HIGH);
//delay(100);
digitalWrite(12,HIGH);
//delay(100);
digitalWrite(11,HIGH);
delay(50);
digitalWrite(13,0);
digitalWrite(12,0);
digitalWrite(11,0);
 digitalWrite(9,HIGH);
//delay(100);
digitalWrite(8,HIGH);
//delay(100);
digitalWrite(10,HIGH);
delay(50);
digitalWrite(9,0);
digitalWrite(8,0);
digitalWrite(10,0);

 digitalWrite(7,HIGH);
//delay(100);
digitalWrite(6,HIGH);
//delay(100);
digitalWrite(5,HIGH);
delay(200);
digitalWrite(7,0);
digitalWrite(6,0);
digitalWrite(5,0);
}
//ABOUT MY LED CUBE:
//1.HAVEN'T USED ANY RESISTORS..SUD HAVE USED BUT DIDNT DO IT.
//2.I HAVE USED CLEAR LEDS...TO MAKE IT MORE PERFECT SHOULD HAVE USED DIFFUES LEDS
//3.SINCE IT WAS MY FIRST SHOT AT DOING THINGS PRACTICALLY THE SOLDERING DONE BY ME AND ZIKO ISNT PERFECT

//CONDITION OF CUBE AT THE LAST WORKING TIME:
//1.THE CUBE WAS WORKING PERFECTLY..
//2.THERE WERE A FEW FUSED LEDS...NOTHING TO DO ABOUT THEM CANT BE REPLACED AFTER THE CUBE IS ALREADY MADE..THATS THE DOWNSIDE OF THIS TYPE OF LED CUBES
//3.THE SOLDERING CAME OFF IN TWO JOINTS
//4.THE SOLDERING AT THE JOINTS SHOULD BE TAKEN CARE OFF AT THE NEXT TIME REPAIRING
//5.SORRY FOR THE WRONG ENGLISH USED HERE

//TECHNIQUE FOR MY PROJECT:
//1.THERE IS A COMMON GROUND FOR ALL THE LEDS..THAT IS ALL THE 3 LAYERS ARE CONNECTED TOGETHER AND GROUNDED
//2.IN A LAYER THE CATHODES ARE CONNECTED AND ALL OF THEM ARE CONNECTED TOGETHER TO THE COMMON GROUND
//3.IN A COLUMN(9 COLUMNS) OVERALL WE HAVE THE ANODES CONNECTED
//4.EACH OF THE 9 COLUMNS.THAT IS ALL THE 9 ANODE ROWS ARE CONNECTED TO PINS 13,11,10,8,9,7,6,5,4
//5.THUS THE PATH OF THE CURRENT IS FROM ONE COLUMS OF LEDS TO THE COMMON GROUND
//6.BASICALLY HERE WE ARE CONTROLLING EACH COLUMN INSTEAD OF CONTROLLING EACH LED
//7.THIS IS AN ABSOLUTE BEGINNER LEVEL PROJECT.
//8.AT THE NEXT TRY I SHOULD TRY TO CONTROL EACH OF THE LEDS INSTEAD OF CONTROLLING ONE COLUMN TOGETHER
//9.BUT EVEN THAT IS EASY AS INSTEAD OF CONNECTING ALL THE LAYERS TO THE COMMON GROUND WE SHOULD HAVE CONNECTED EACH OF THE LAYERS SEPARATELY TO A COMMON GROUND.
//9.FOR THAT THE BREADBOARD WOULD HAVE BEEN USED

//LEARNT A LOT FROM HERE...WAY FORWARD IS 4*4*4 CUBE OR 8*8*8 CUBE?????
