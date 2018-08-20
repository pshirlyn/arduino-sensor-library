#include <CapacitiveSensor.h>

CapacitiveSensor capSensor = CapacitiveSensor(4, 2); //creating an instance of the library

int threshold = 100; //change after testing sensor values

const int ledPIN = 12; //defining pin for LED

void setup(){
  Serial.begin(9600); //open Serial connection at 9600 bps
  pinMode(ledPIN, OUTPUT); //setting led pin as output
}

void calibration()
{
  
  
  delay(10);
}

void loop(){
  long sensorValue = capSensor.capacitiveSensor(30); //number of samples
  Serial.println(sensorValue);
  if(sensorValue > threshold){
    digitalWrite(ledPIN, HIGH); //if sensor reading > threshold, turn on led
  }
  else
  {
    digitalWrite(ledPIN, LOW); //if sensor reading < threshold, turn on led
  }
  delay(10);
}




