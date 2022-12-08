int led1=8;
int led2=9;
int led3=10;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
 
  
}

void loop() {
  digitalWrite(led1,HIGH);
  delay(4000);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  delay(2000);
  digitalWrite(led2,LOW);
  for(int i=0;i<2;i++){
    digitalWrite(led3,HIGH);
    delay(1000);
    digitalWrite(led3,LOW);
    delay(1000);
  }
    
  
}