int sensor_pin0 = A0;
int sensor_pin1 = A1; 
int output_value0;

int output_value1;

void setup() {
  Serial.begin(9600);
  Serial.println("Reading From the Sensor ...");
  delay(2000);
  }

void loop() {

  output_value0= analogRead(sensor_pin0);
  output_value1= analogRead(sensor_pin1);
  //output_value = map(output_value,550,0,0,100);
  Serial.print("Mositure : ");
  Serial.print(output_value0);
//  Serial.println("%");
  delay(1000);
  Serial.print("Mositure : ");
  Serial.print(output_value1);
//  Serial.println("%");
  delay(1000);

  }

