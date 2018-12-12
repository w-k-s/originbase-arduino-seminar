const int BuzzerPin = 9;

void setup(){}

void loop(){
  tone(BuzzerPin,100);
  delay(100);
  tone(BuzzerPin,150);
  delay(100);
  tone(BuzzerPin,1000);
  delay(100);
 }
