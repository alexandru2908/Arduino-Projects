int led=9;
int led2=10;
int led3=11;
int digitalPin=8;
int analogicPin=A0;
int analogicVal;
int digitalVal;

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(digitalPin,INPUT);
  Serial.begin(9600);
  
}
void loop()
{
  digitalVal=digitalRead(digitalPin);

  if(digitalVal==HIGH){
    
    if(analogRead(analogicPin) > 70){
      digitalWrite(led,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,HIGH);
    }
    if(analogRead(analogicPin) >30 && analogRead(analogicPin)<70){
      digitalWrite(led,HIGH);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
    }
    if(analogRead(analogicPin)<30){
      digitalWrite(led,LOW);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,LOW);
    }
  }
  if(digitalVal==LOW){
    digitalWrite(led,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
  }
  delay(100);
}