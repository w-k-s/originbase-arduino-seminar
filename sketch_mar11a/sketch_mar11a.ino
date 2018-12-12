const int Button1Pin = 2;
const int Button2Pin = 3;
const int LEDPin = 13;


void setup(){
   pinMode(Button1Pin, INPUT);
   pinMode(Button2Pin, INPUT);
   pinMode(LEDPin, OUTPUT);
}

void loop(){
  int Button1State = digitalRead(Button1Pin);
  int Button2State = digitalRead(Button2Pin);

  bool Button1Off = Button1State == LOW;
  bool Button2Off = Button2State == LOW;
  bool EitherButtonOff = Button1Off || Button2Off;
  bool BothButtonsOff = Button1Off && Button2Off;

  if(EitherButtonOff && !BothButtonsOff){
    digitalWrite(LEDPin,HIGH);
  }else{
    digitalWrite(LEDPin, LOW); 
  }
}

