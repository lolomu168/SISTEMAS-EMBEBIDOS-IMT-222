#define led1 13
#define led2 12
#define time  5000
#define BTN 2
bool flag=false;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(BTN,INPUT);
  attachInterrupt(digitalPinToInterrupt(BTN), interrumpir,FALLING);
  
}

void loop(){
  digitalWrite(led1,1);
  delay(time);
  digitalWrite(led1,0);
  delay(time);
  if(digitalRead(BTN)){
    digitalWrite(led2,1);
  }
     else{
       digitalWrite(led2,0);
     }
     }
void interrumpir(){
  flag!=flag;
  digitalWrite(led2,1);
}