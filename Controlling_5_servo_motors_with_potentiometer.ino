/* Circuit Diagram and controlling of  5 servo motors to go from
0 to 90 Degree with potentiometer*/
#include <Servo.h>
Servo servo1; // Define Servos from the library
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
int Angle = 0; // Servo motors angle
int PotReading = 0; // Potentiometer Reading
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
  PotReading = analogRead(A0); // Potentiometer pin configuration
  Angle = map (PotReading , 0 , 1023 , 0 , 180); // mapping the value of the angle from the reading of potentiometer according to high-low values of current and angle
  servo1.write(Angle); // Defining the angle to the servos
  servo2.write(Angle);
  servo3.write(Angle);
  servo4.write(Angle);
  servo5.write(Angle);
  delay(10);

}
