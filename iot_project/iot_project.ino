//
Lakshminarayanan av

first you need to creat a blynk account and setup blynk 
add 1 switch as pinD4

//
#include <Wire.h>
 #define BLYNK_PRINT Serial
 #include <ESP8266WiFi.h>
 #include <BlynkSimpleEsp8266.h>


#define relay_pin D4

 char auth[]      = "#####"; //Auth code sent via Email
 const char *ssid = "#####"; // Enter your Wi-Fi Name
 const char *pass = "#####"; // Enter your Wi-Fi Password

void setup()
{
   Serial.begin(115200);
  // Blynk.begin(auth, ssid, pass);
   Blynk.begin(auth, ssid, pass;
   Wire.begin();

  pinMode(D4, OUTPUT);
}

void loop(){
  Blynk.run();
}
