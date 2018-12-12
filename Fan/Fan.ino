const int sensorPin = 0;
int motorPin = 9;
int ledPin = 8;

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  float voltage,degreesC;
  voltage = getVoltage(sensorPin);
  degreesC = (voltage - 0.5) * 100.0;

  Serial.print("voltage: ");
  Serial.print(voltage);
  Serial.print("\t");
  Serial.print("Temp (C): ");
  Serial.print(degreesC);
  Serial.println();
  delay(1000);

  analogWrite(motorPin, degreesC > 20? 200 : 0);
  delay(3000);

}

float getVoltage(int pin){
  return (analogRead(pin) * 0.004882814);
}

