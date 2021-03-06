#include <Servo.h>

Servo myservo;

const int trigPin = 9;
const int echoPin = 10;

long duration;
int distance;

int pos = 90;
 
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myservo.attach(11);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(echoPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;


  if (distance < 30){
    myservo.write(180);
    delay(6000);
    myservo.write(pos);
    delay(1000);
  }

  
  
}
