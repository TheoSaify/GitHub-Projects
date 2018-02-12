#include "FS.h"

void setup() {
  Serial.begin(115200);
  SPIFFS.begin();
  
}

void loop() {
File f= SPIFFS.open("/test.txt","a");
if( !f){
 Serial.println("Error in opening");
}Serial.println("Opening File");

f.println("HEY PAUL");

f.close();

File f1=SPIFFS.open("/test.txt","r");
if( !f1){
  Serial.println("Error in opening");
  }Serial.println("Opening File");

String s =f1.readStringUntil('\n');
Serial.println(s);

f1.close();

delay(5000);
}
