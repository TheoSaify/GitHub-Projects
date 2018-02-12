#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiServer.h>
#include <WiFiUdp.h>
#include <SoftwareSerial.h>

SoftwareSerial EspSerial(3,1); // RX, TX

const char* ssid = "WIFI-NAME";
const char* password = "PASSWORD";

void setup() {
   Serial.begin(115200);
  WiFi.mode(WIFI_STA);
 WiFi.begin(ssid, password);

 EspSerial.begin(115200);
 
}

void loop() {
if (WiFi.status() == WL_CONNECTED) {
    Serial.println("WiFi connected");
    Serial.print(WiFi.localIP());
    Serial.println("/");
  }
   
 delay(5000);
}
