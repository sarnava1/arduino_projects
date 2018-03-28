int outputpin=13;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(outputpin,OUTPUT);
  outputpin=LOW;
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(outputpin,HIGH);
  delay(1000);
  digitalWrite(outputpin,LOW);
  delay(1000);
}
