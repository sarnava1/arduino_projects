int ledState = HIGH;         // the current state of the output pin
int buttonState = LOW;             // the current reading from the input pin
int lastButtonState = LOW;   // the previous reading from the input pin


// the following variables are unsigned longs because the time, measured in
// milliseconds, will quickly become a bigger number than can be stored in an int.
unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 100;    // the debounce time; increase if the output flickers

int reading =0;
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
  reading=digitalRead(8); Serial.print("reading : "); Serial.print(reading);
   

  // check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH), and you've waited long enough
  // since the last press to ignore any noise:

  // If the switch changed, due to noise or pressing:
  if (reading != lastButtonState) {
    // reset the debouncing timer
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:

    // if the button state has changed:
    if (reading != buttonState) {
      buttonState = reading;

      // only toggle the LED if the new button state is HIGH
      if (buttonState == HIGH) {
        ledState = !ledState;
        count++;
      }
    }
  }
      
//  if(d==1)
//  {
//  count++;  
//  Serial.println(count);  
//  digitalWrite(13,HIGH);
//  delay(10);
//  }
// else
//  {
//  digitalWrite(13,LOW);
//  delay(10);
//  //Serial.println(count);
//  }
  

  
//  while(count>=0&&count<=5){
//    digitalWrite(redpin,HIGH);
//    digitalWrite(yellowpin,LOW);
//    digitalWrite(greenpin,LOW);
//    delay(1000);
//    count++;
//  }
//  while(count>5&&count<=7){
//    digitalWrite(redpin,LOW);
//    digitalWrite(yellowpin, HIGH);
//    digitalWrite(greenpin,LOW);
//    delay(1000);
//    count++;
//  }
//  while(count>7&&count<=10){
//    digitalWrite(redpin,LOW);
//    digitalWrite(yellowpin,LOW);
//    digitalWrite(greenpin,HIGH);
//    delay(1000);
//    count++;
//  }
//  count=0;


if(count>=0&&count<=5){
  digitalWrite(redpin,HIGH);
    digitalWrite(yellowpin,LOW);
    digitalWrite(greenpin,LOW);
 //   delay(1000);
  //  count++;
}
else if(count>5&&count<=7){
  digitalWrite(redpin,LOW);
    digitalWrite(yellowpin,LOW);
    digitalWrite(greenpin,HIGH);
 //   delay(1000);
  //  count++;
}
else
{
  digitalWrite(redpin,LOW);
    digitalWrite(yellowpin,HIGH);
    digitalWrite(greenpin,LOW);
 //   delay(1000);
  //  count++;
}


Serial.print("    count:   ");
Serial.print(count);
Serial.print("  Button State:    ");
Serial.print(buttonState);

Serial.println("  ");
lastButtonState = reading;
delay(25);
if(count>10)
count=0;
}
