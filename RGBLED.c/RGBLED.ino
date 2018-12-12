const int RED_PIN = 9;
const int GREEN_PIN = 10;
const int BLUE_PIN = 11;

void setup(){
   pinMode(RED_PIN, OUTPUT);
   pinMode(GREEN_PIN, OUTPUT);
   pinMode(BLUE_PIN, OUTPUT);
}

void loop(){
  ActivateRGBWithDelay(LOW,LOW,LOW,1000);//None
  ActivateRGBWithDelay(HIGH,LOW,LOW,1000);//Red
  ActivateRGBWithDelay(LOW,HIGH,LOW,1000);//Green
  ActivateRGBWithDelay(LOW,LOW,HIGH,1000);//Blue
  ActivateRGBWithDelay(HIGH,HIGH,LOW,1000);//Yellow: Red and Green
  ActivateRGBWithDelay(LOW,HIGH,HIGH,1000);//Cyan: Green and Blue
  ActivateRGBWithDelay(HIGH,LOW,HIGH,1000);//Purple
  ActivateRGBWithDelay(HIGH,HIGH,HIGH,1000);//White
}

void ActivateRGBWithDelay(int red, int green, int blue, int timeout){
  if(red != HIGH && red != LOW) red = LOW;
  if(green != HIGH && green != LOW) green = LOW;
  if(blue != HIGH && blue != LOW) blue = LOW;
  digitalWrite(RED_PIN,red);  
  digitalWrite(GREEN_PIN,green);
  digitalWrite(BLUE_PIN,blue);
  delay(timeout);
}
