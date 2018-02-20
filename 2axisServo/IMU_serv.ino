#include<Servo.h>

Servo serv_v;
Servo serv_h;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  serv_h.attach(5);
  serv_v.attach(6);

  serv_h.write(90);
  serv_v.write(90);

  setup_MPU();
}

void loop() {
  // put your main code here, to run repeatedly:

  int angle_v,angle_h;

  getAngle(&angle_h,&angle_v);
  
  serv_h.write(angle_h);
  serv_v.write(angle_v);  

}
