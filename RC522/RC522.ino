#include <Arduino.h>
#include "RC522.h"

RC522 sensor;

void setup() { 
  sensor.initSensor();
}
 
void loop() {
  String card = "";
  
  sensor.readCard(card);

  if( estaCadastrado(card) ){
    digitalWrite(LED_BUILTIN, LOW); 
    digitalWrite(4, HIGH);
    delay(50);
    digitalWrite(4, LOW); 
  }
  else{
    digitalWrite(LED_BUILTIN, HIGH); 
    digitalWrite(4, LOW); 
  }
  
}

bool estaCadastrado(String temp){
  String codigo = "8fe7f128";

  if(temp == codigo)
    return true;

  return false;
}


