ABSTRACT


With the Predictions of world earth organization that number of deaths due to traffic accidents will be around two million with less than fifteen years, researches now a days are paying more attention in how to help in preventing traffic accidents and lower than the number of occurred fatalities. The purpose of the study is an attempt to prevent traffic accidents due to fatigue or sleepiness. Developed system uses a camera and image processing techniques embedded in a raspberry pi three module to detect drivers eye and decide whether the driver is sleepy or not based on this decision and alarm system will be activated. Alarm can be visual, audio and even a simple vibration in the steering wheel.




 1.INTRODUCTION


The anti-sleep driving alarm for people doing all night drivers as well as security guards and other s we have to sit in one place for long periods of time without any stimulating interaction . The newest high tech way to stay awake is a good purchase for you whether you ever have to drive back home after an exhausting day at work or just need to get something done and sleep is not an option. This trusty sleep alarm will keep you at full alert and is always ready to help if you head dozes off.

 This has the potential to save lives on the road. Long distance lorry drivers can fall asleep by driving too long hours due to the pressures put on them to get the goods to their destination at certain times. This item has the potential to keep them awake or at least to tell them when they are over tired and need to stop driving.

All-night Drivers: accidents due to drivers falling asleep at the wheel are quite common. Maybe a long and tiring day at the office has drained your energy and all you want to do is return home and sleep. Some drivers tend not to pay attention on long stretches of a boring road they know too well and without knowing it they doze off. Protect yourself and your passengers with this anti sleep alarm.

Security Guards: This anti sleep alarm will make sure your eyes are kept wide open and on the target.

Students: Maybe they forgot the exam was tomorrow, maybe they were out partying, or maybe they just waited until the last minute. In any case, college students always have the need to burn the midnight oil. The problem is that it is extremely easy to fall asleep in the midst of studying and before you know it, morning has come and the exam is already over or you still haven't learned the material. If you don't want that to happen, then keep this reliable anti sleep alarm at your side.

In Summary:
Reliable and comfortable anti sleep alarm.
Great for drivers, students, office workers, security guards.
Powerful and heavy vibrating when you doze off, turn it off when not needed
Replaceable button cell battery will last for half a year (used every day for 3 hours).
This circuit saves both time and electricity for students. It helps to prevent them from dozing off while studying, by sounding a beep at a fixed time interval, say, 30 minutes.


2.PROPOSED PROJECT
WORKING:
 The working of this project is based on an Infra Red Sensor, This sensor is the heart of this project.
Let's take a look to the IR Sensor. In picture I shown a typical IR Sensor, basically it has a transmitter IR LED, A photo Diode, an Opp-amplifier IC and a potentiometer.
The photo diode is placed just next to the IR LED in such a way that it can not receive IR rays directly. Photodiode is sensitive to the IR radiation. It's cathode connected to the positive voltage i.e. 5volt and anode connected to the noninverting input of the Opp-amplifier which also get pulled down though the 10Kilo ohm resistor. Potentiometer in IR sensor is use to set the sensitivity distance of the sensor, it connected to the inverting input of the Opp-amplifier. IR LED continuously transmit the infra red rays and if any object comes in front of it, IR rays get reflected back and it received by the photo diode due to this change in IR radiation the voltage at the anode get change, the change in anode voltage is depend on the IR radiation received by the photo diode. More the IR radiation received grater will be the change in anode voltage. The output of the IR Sensor taken from the output of the Opp-amplifier. We can adjust the sensitivity distance by rotating the potentiometer on the sensor, we rotate the potentiometer that means we set a threshold voltage for the noninverting input of the Opp-amplifier. Whenever the voltage on the noninverting input is greater than the threshold voltage, the voltage on the noninverting input i.e. +ve voltage from the photodiode get forwarded and get the positive pulse at the output of the Opp-amplifier i.e. output of the sensor.

A typical IR sensors circuit diagram is attached check it for reference.

Let's see the main circuit diagram of the project. I connected a IR sensor to the Arduino Pro Mini board as Vcc of the sensor to the vcc of the Arduino Pro Mini, Ground to the ground and the output of the sensor to the Analog pin one (A1) of the Arduino Pro Mini. I used a 5 volt buzzer and a vibrator motor from the old cell phone for alerting. I connected both buzzer and vibrator motor in parallel and used an general purpose NPN Transistor (BC547) to drive them. Transistor's emitter connected to the ground and collector connected to the negative pin of the buzzer and vibrator motor. Positive terminal of vibrator motor and buzzer are further connected to the vcc of the Arduino Pro Mini. Base of the transistor connected to the pin D3 of the Arduino Pro Mini through the 4.7 kilo ohm resistor.



 COMPONENTS
BUZZER: 



A buzzer or beeper is an audio signaling device,[1] which may be mechanical, electromechanical, or piezoelectric (piezo for short). Typical uses of buzzers and beepers include alarm devices, timers, train and confirmation of user input such as a mouse click or keystroke.
SPARKFUN AURDINO PRO MINI 328



It's the Arduino Pro Mini! SparkFun's minimal design approach to Arduino. This is a 3.3V Arduino running the 8MHz bootloader. Arduino Pro Mini does not come with connectors populated so that you can solder in any connector or wire with any orientation you need. We recommend first time Arduino users start with the Uno R3. It's a great board that will get you up and running quickly. The Arduino Pro series is meant for users that understand the limitations of system voltage (3.3V), lack of connectors, and USB off board.

We really wanted to minimize the cost of an Arduino. In order to accomplish this we used all SMD components, made it two layer, etc. This board connects directly to the FTDI Basic Breakout board and supports auto-reset. The Arduino Pro Mini also works with the FTDI cable but the FTDI cable does not bring out the DTR pin so the auto-reset feature will not work. There is a voltage regulator on board so it can accept voltage up to 12VDC. If you're supplying unregulated power to the board, be sure to connect to the "RAW" pin on not VCC.

The latest and greatest version of this board breaks out the ADC6 and ADC7 pins as well as adds footprints for optional I2C pull-up resistors! We also took the opportunity to slap it with the OSHW logo

IR SENSOR:

 Infrared transmitter - a device that emits infrared rays. 
Similarly IR Receiver is used to receive the IR rays 
transmitted by the IR transmitter. One important point is 
both IR transmitter and receiver should be placed parallel to 
each other. The signal is given to IR transmitter whenever 
the signal is high, the IR sensor is conducting it passes the 
IR rays to the receiver. The IR receiver is connected with 
comparator. The comparator is connected with operational 
amplifier. In the comparator circuit the reference voltage is 
given to inverting input terminal of the circuit .The Noninverting input terminal is connected to IR receiver. When 
there is an interruption in the IR rays between the IR 
transmitter and receiver, the IR receiver becomes not 
conducting. So the comparator non inverting input terminal 
voltage is higher than inverting input. The comparator 
output is at the range of +5V. This voltage is given to 
microcontroller. When IR transmitter passes the rays to 
receiver, the IR receiver becomes conducting due to noninverting input voltage is lower than inverting input. Now
 receiver output is low. This is to know whether the eye is at 
close or open position at that condition. 
In the transmitter section, eye blink sensor is placed near the 
eye to sense the blink count and this information is 
transmitted in the form of pulses and is given to the ARM7 
Microcontroller. The ARM7 processor use this information 
to compare with the normal eye blink programmed in and if 
any abnormal situation arises, the buzzer indication is given 
to the driver to alert him, this operation is enabled by means 
of the circuit connected to the buzzer and the signal is 
transmitted via RF-transmitter at the frequency of 433.92 
MHz’s. The transmitted signal is received and the signal is 
decoded and given to the Microcontroller, which use this 
information for displaying the alert message in the LCD as 
programmed along with buzzer alert. When there is any 
leakage of gas in the vehicle the sensor sense such condition 
and give the signal by glowing the Emergency light. And in 
case of any fire inside the vehicle the temperature sensor 
sense the condition and stops the engine. And in case of any 
gas leakage the smoke sensor deducts the condition and 
gives the emergency light.




SENSER SETTING:



It will be better if you do this before sticking the sensor on the frame, After connecting all the components power up it. Now set the the sensors sensitivity distance to minimum. About 10 mm or less.







Here I didn't used any PCB for making the circuit, since it's circuit is not that much complex. I stick the sensor over the Arduino pro mini board using hot glue and solder it with short flexible wires. After next to it, I made a buzzer unit, in which the vibrator, buzzer and transistor is include, which I mount on left stick of glasses near ear. Also stick the battery on the same stick and mount an on off button near to the left eye. stick the sensor to the frame such as it will close to eye. the distance between the eye and the sensor will not more than 15 to 20mm.



