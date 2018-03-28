#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "7d8fe783f80c4f499a00be52c16bbff6";


char ssid[] = "Notforall";
char pass[] = "itsmystyle1";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
} 

void loop()
{
  Blynk.run();
}
