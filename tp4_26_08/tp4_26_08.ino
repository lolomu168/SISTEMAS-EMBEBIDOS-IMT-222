#define LED     3
#define POT     0
int intensidad;

void setup() {
pinMode (LED, OUTPUT);
}

void loop() {
intensidad = analogRead (POT) / 4;
analogWrite(LED, intensidad);
}
