# Arduino based motion-sensing light automation system
###Objective: To simulate a lighting system which gets powered on detecting motion using a PIR sensor and an Arduino. 

##Requirements:
The following four components are going to be used in this project: 
* Arduino UNO and Software Arduino 1.6.12 
* LEDs (6 pcs Green) 
* PIR Motion Sensor 
* Breadboard and Jumper wires

##Procedure:
1. Download the Arduino software and connect the Arduino UNO to the laptop using the data cable.
2. Preliminary settings-
  * Click on tools 🡪 click on Board: “Arduino/Genuino Uno”🡪click on Arduino/Genuino Uno
  * Click on tools 🡪 click on Port 🡪 COM22 (port number that was used)
3. Now the board is ready to receive the signals and execute the program, make the connections-
  * Connect the VCC of PIR to +5 of Arduino
  * Connect the GND of PIR to GND of Arduino (adjacent to +5)
  * Connect the Out of PIR to Digital pin 2 of Arduino (any digital pin)
  * Rotate the time potentiometer fully counter clockwise 
  * Connect one LED to pin 13 and Adjacent GND of Arduino by placing on breadboard.
  * Connect all other LEDs on the bread board according to required pattern. (Note: + terminal of LED is longer)
3. Run the script [light_automation.c](https://github.com/roshni-b/Light-Automation/blob/master/light_automation.c "Script").
4. Open the serial monitor to see the detection of motion, the LEDs will glow when motion is detected

##Result: 
The basic circuit using the PIR sensor was simulated on the breadboard which on sensing any motion (hand movement) turned the LED lights on, the serial monitor recorded the detection of motion, and the LEDs turned off after 3 seconds. The sensitivity was turned to least so it can sense motion only nearer to it.

##References:
1. <www.instructables.com>
2. <www.learn.sparkfun.com>
3. <www.electronicshub.org> 
4. Husin, Rohaida, et al. ”Automatic street lighting system for energy efficiency based on low cost microcontroller.” International Journal of Simulation Sys- tems, Science Technology 13.1 (2012): 1473-8031.
