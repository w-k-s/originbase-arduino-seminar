const int SensorPin = 0;
const int BuzzerPin = 9;

void setup(){
  pinMode(SensorPin, INPUT);
  pinMode(BuzzerPin, OUTPUT);  
}

void loop(){
  int SensorValue = analogRead(SensorPin);
  tone(BuzzerPin,SensorValue * 5);
  //delay(100);
 }
