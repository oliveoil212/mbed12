#include "mbed.h"

#define CENTER_BASE 1500

PwmOut servo(D11);

void servo_control(int speed) {
   if (speed > 200)       speed = 200;
   else if (speed < -200) speed = -200;

   servo = (CENTER_BASE + speed)/20000.0f;
}

int main() {
   servo.period_ms(20);

   while(1) {
   servo = (CENTER_BASE)/20000.0f;
      // servo_control(100);
      // ThisThread::sleep_for(2000ms);
      // servo_control(-100);
      // ThisThread::sleep_for(2000ms);
   }
}
