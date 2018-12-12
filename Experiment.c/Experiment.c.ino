const int SensorPin = 0;
const int LEDPin = 9;

void setup(){
  pinMode(SensorPin, INPUT);
  pinMode(LEDPin, OUTPUT);  
}

void loop(){
  int SensorValue = analogRead(SensorPin);
  digitalWrite(LEDPin,SensorValue);
  delay(100);
 }
