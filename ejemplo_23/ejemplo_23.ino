#define led 11
#define boton 3

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode (boton, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pulsado = digitalRead (boton);
  if(pulsado == HIGH)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
  delay(1000);
}