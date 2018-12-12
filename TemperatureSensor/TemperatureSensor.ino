const int sensorPin = 0;
int ledPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  float voltage, degreesC, degreesF;
  
  voltage = getVoltage(sensorPin);
  degreesC = (voltage - 0.5) * 100.0;
  degreesF = ((degreesC * (9/5)))+32;

  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.print("\t");
  Serial.print("Temp (C): ");
  Serial.print(degreesC);
  Serial.print("\t");
  Serial.print("Temp (F): ");
  Serial.println(degreesF);
  delay(1000);

  digitalWrite(ledPin,degreesC > 23? HIGH : LOW);
}

float getVoltage(int pin){
  return (analogRead(pin) * 0.004882814);
}


