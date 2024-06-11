#ifndef RC522_H
#define RC522_H

#include <Arduino.h>
#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 15
#define RST_PIN 0

class RC522{
  private:

    
    MFRC522 rfid; // Instance of the class

    MFRC522::MIFARE_Key key; 

    // Init array that will store new NUID 
    byte nuidPICC[4];

    public:
      RC522();
      void initSensor();
      void readCard(String &s);
};
#endif