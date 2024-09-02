#define redLed 13       // LED rojo
#define yellowLed 12    // LED amarillo
#define greenLed 11     // LED verde
#define timeGreen 5000  // Tiempo en verde
#define timeYellow 2000 // Tiempo en amarillo
#define timeRed 5000    // Tiempo en rojo
#define BTN 2           // Botón
bool resetFlag = false;

void setup(){
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(BTN, INPUT);
  attachInterrupt(digitalPinToInterrupt(BTN), interruptHandler, FALLING);
}

void loop(){
  if(resetFlag){
    resetFlag = false;
	delay(2000);
  }
  digitalWrite(greenLed, HIGH);
  delay(5000);
  digitalWrite(greenLed, LOW);

  digitalWrite(yellowLed, HIGH);
  delay(2000);
  digitalWrite(yellowLed, LOW);

  digitalWrite(redLed, HIGH);
  delay(5000);
  digitalWrite(redLed, LOW);
}

void interruptHandler(){
  resetFlag = true;
      digitalWrite(redLed, HIGH);
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, LOW);
}
