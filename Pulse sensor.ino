int ledV = 8;
int ledG = 9;
int ledR = 10;

int sensorPin = A0;
void setup() {
   Serial.begin(9600);
   pinMode(ledR, OUTPUT);
   pinMode(ledG, OUTPUT);
   pinMode(ledV, OUTPUT);

}
void loop ()
{

  if( analogRead(sensorPin)<875)
      {
        digitalWrite(ledV,HIGH);
        delay(500);
        digitalWrite(ledV,LOW);
      }
  else if(analogRead(sensorPin)>875 && analogRead(sensorPin)<900)
      {
        digitalWrite(ledG,HIGH);
        delay(500);
        digitalWrite(ledG,LOW);
      }
  else if( analogRead(sensorPin)>900)
      {
        digitalWrite(ledR,HIGH);
        delay(500);
        digitalWrite(ledR,LOW);

      }
}

