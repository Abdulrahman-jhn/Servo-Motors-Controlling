/* Circuit Diagram and controlling of  5 servo motors to go from
0 to 90 Degree*/
#include <Servo.h>
Servo servo1; // Define Servos from the library
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
int InitialAngle = 0; // Initial value of the angle
int FinalAngle = 90; // Final value of the angle
void setup()
{
  servo1.attach(9); // Arduino pins configuration
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);
  servo5.attach(13);
}
void loop()
{
  servo1.write(InitialAngle); // Defining the angle to the servos
  servo2.write(InitialAngle);
  servo3.write(InitialAngle);
  servo4.write(InitialAngle);
  servo5.write(InitialAngle);
  delay(1000);
  servo1.write(FinalAngle);
  servo2.write(FinalAngle);
  servo3.write(FinalAngle);
  servo4.write(FinalAngle);
  servo5.write(FinalAngle);
  delay(1000);
}
