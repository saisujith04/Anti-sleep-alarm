#include<Servo.h> 
Servo myservo; 
int Sinput = D2; // creating or assigning an int type 
variable for sensor input signal 
int Buz=D1 ; // creating or assigning an int type 
variable for output buzz and vibrator 
int pos = 0; 
void setup() /// in void setup we make the 
selected pins output or input. { 
 myservo.attach(D5); 
 
pinMode(Sinput, INPUT); /// here it is sensors pin so 
we are defining here that this pin is input pin 
pinMode(Buz, OUTPUT); /// here it is the pin used for 
transistor to control it, so we are defining here that 
this pin is output pin 
} 
void loop() 
{ 
if(digitalRead(Sinput)==LOW) 
{ delay (2000); // we are waiting for two second after 
the input pulse from the sensor. if the pulse is for more 
than 2 second then buzzer get triggered 
digitalWrite(Buz, HIGH); 
myservo.write(0); 
} 
else { 
if(digitalRead(Sinput)== HIGH) 
{ 
digitalWrite(Buz, LOW); 
for (pos = 0; pos <= 180; pos += 1) { // goes from 0 
degrees to 180 degrees 
 // in steps of 1 degree 
 myservo.write(pos); // tell servo to go to 
position in variable 'pos' 
 delay(5); // waits 15 ms for the servo to 
reach the position } 
 for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 
degrees to 0 degrees 
 myservo.write(pos); // tell servo to go to 
position in variable 'pos' 
 delay(5); // waits 15 ms for the servo to 
reach the position 
 } 
} 
} 
}
