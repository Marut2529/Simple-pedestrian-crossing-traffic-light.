# Simple-pedestrian-crossing-traffic-light.
This project is for the beginner who starts to learn to coding by Arduino.
INTRODUCTION 
This project has shown you how to make a simple pedestrian crossing traffic light. LEDs, a push button, a piezo buzzer and Arduino board will be replicated to a pedestrian crossing traffic light. 
You will learn some basic function and structure such as pinMode,digitaWrite(),digitalRead(),delay, for loop. 

How to build. 
Firstly, set the Arduino digital pin number 8,9,10,2 as OUTPUT and connect to LEDs. Green, yellow, red and piezo buzzer in order. LEDs will be connected as common cathode which is lighting when led get HIGH logic. Set the digital pin number 1 as INPUT and connect to push button with push-up resistor. Connect the 5V DC. and GND from Arduino to breadboard as shown in diagram. 
 
How it works. 
The Green light will be ON all the time that’s mean the car are running once the push button has been pushed by pedestrian the green light will be off then yellow light shown for 2seconds and off after that the red light will be shown with beep sound from buzzer for 8 seconds. In this time car will stop to let pedestrian cross the road. After 8 seconds the buzzer will stop and the Red light change to yellow then green in order. Please note that you can change delay time as you prefer by edit the code in program. 


