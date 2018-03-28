  int pirvalue;
  int inputpin=3;
  int outputpin=4;
  void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(inputpin,INPUT);
  pinMode(outputpin,OUTPUT);
  digitalWrite(outputpin,LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  pirvalue=digitalRead(inputpin);
  Serial.println(pirvalue);
  pirvalue=!pirvalue;
  Serial.println(pirvalue);
  delay(1000);
  
  digitalWrite(outputpin,pirvalue);
  
 
  
}
