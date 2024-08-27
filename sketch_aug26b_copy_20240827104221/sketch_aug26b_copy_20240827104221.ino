#define rojo       2
#define amarillo   3
#define verde      4

void setup()
 {

pinMode(amarillo, OUTPUT);
pinMode(verde, OUTPUT);
}

void loop()
{
digitalWrite( rojo, HIGH);
delay(5000);
digitalWrite( rojo, LOW); 
  
digitalWrite( amarillo, HIGH);
delay(1000);
digitalWrite( amarillo, LOW);

digitalWrite( verde, HIGH);
delay(10000);
digitalWrite( verde, LOW);
}