/************************( Library + define )************************/
#include "DHT.h"                
#define DHTPIN 5          
#define DHTTYPE DHT11    
/********************************( Define dht of type DHT)********************************/                          
DHT dht(DHTPIN, DHTTYPE);

void setup() {
 Serial.begin(115200);
 Serial.println("DHT11 Test programm");
 dht.begin();
 }

  void loop(){
  
  
  float t = dht.readTemperature(); 
  
  if (isnan(t)) {       
    Serial.println("Error Reading ");
    return;
  }else{
    
  Serial.print("Temperature: ");
  Serial.print(t);                 
  Serial.println("C");
    
    }
  delay(5000);  
  }
