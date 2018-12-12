int motorPin = 9;

void setup(){
  pinMode(motorPin,OUTPUT);
  Serial.begin(9600);
  while(!Serial);
  Serial.println("Type a speed (0-255) into the box above,");
  Serial.println("then click [send] or press [return]");
  Serial.println();
}

void loop(){
  if(Serial.available()){
    int speed = Serial.parseInt();
    bool hasSpeed = speed >= 0 && speed <= 255;
    Serial.print("Speed: ");
    Serial.println(speed);
    analogWrite(motorPin,hasSpeed? speed : 0);
    delay(100);
  }
}

