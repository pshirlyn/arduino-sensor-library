const int sensorPin = A0;

// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600);
  // initialize the digital pin as an output.
}

// the loop routine runs over and over again forever:
void loop() {
  int sensorVal = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);
  delay(1);
}
