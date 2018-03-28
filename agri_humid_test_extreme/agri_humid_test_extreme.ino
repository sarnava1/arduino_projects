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
  output_value0 = map(output_value0,870,325,100,0);
  //output_value1 = map(output_value1,870,325,100,0);
  Serial.print("Mositure : ");
  Serial.print(output_value0);
  //325 for extreme dry soil,870 for medium wet soil,
  //even the second sensor gave the same range of output
  Serial.println(" %");
  delay(2000);
  // Serial.print("Mositure 2: ");
  //Serial.println(output_value1);
  //  Serial.println("%");
  //delay(2000);

  }

