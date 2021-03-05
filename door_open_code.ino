#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo servo;

char auth[] = "NSzex67dMxwdOD1Sp_UJc0ryHFaTz0K8";
char ssid[] = "hotspot";
char pass[] = "123456789";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  

  servo.attach(15); // NodeMCU D8 pin
  
 }
  
void loop()
{
  
  Blynk.run();
  
}
BLYNK_WRITE(V1)
{
servo.write(0);  
delay(4500);       
servo.write(180);
delay(0);
}
