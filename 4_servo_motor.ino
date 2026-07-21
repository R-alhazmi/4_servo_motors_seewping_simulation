#include <Servo.h>

Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;

int pos = 0;

void setup() {
  servo_1.attach(3,200,2500);
  servo_2.attach(5,200,2500);
  servo_3.attach(6,200,2500);
  servo_4.attach(9,200,2500);
  
   for(pos = 0; pos <= 180; pos += 1){
    servo_1.write(pos);
    servo_2.write(pos);
    servo_3.write(pos);
    servo_4.write(pos);
    
    delay(5);
  }
  
   for(pos = 180; pos >= 0; pos -= 1){
    servo_1.write(pos);
    servo_2.write(pos);
    servo_3.write(pos);
    servo_4.write(pos);
    
    delay(5);
  }
  
    servo_1.write(102);
    servo_2.write(102);
    servo_3.write(102);
    servo_4.write(102);
  
}
void loop() {
  
}
  
 