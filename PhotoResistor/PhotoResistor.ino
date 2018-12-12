int sensorPin = 0;
int ledPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  int lightLevel = analogRead(sensorPin)/2;
  Serial.print("Light Level: ");
  Serial.println(lightLevel);
  if(lightLevel < 350){
    digitalWrite(ledPin,HIGH);
  }else{
    digitalWrite(ledPin,LOW);
  }
  delay(10);
}
