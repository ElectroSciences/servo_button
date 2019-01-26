#include <Servo.h>
Servo myservo;
int pos = 0;      
void setup() {
  // put your setup code here, to run once:
  myservo.attach(7);
  pinMode(9, INPUT);
  pinMode(7, OUTPUT);  

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(9) == HIGH){
  for (pos = 0; pos <= 180; pos += 1) { 
       myservo.write(pos);
       delay(5);
  }  
  {
    delay(800);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
       myservo.write(pos);
       delay(5); 
  }
  }
}
