Security Light with Ultrasonic Sensor
This project creates a security light system using an ultrasonic sensor, LED, buzzer, and Arduino. The system detects motion within a specified range and activates an LED and buzzer to alert the user.

Table of Contents
Components
Circuit Diagram
Setup
Programming
Usage
Customization
Troubleshooting
License
Components
Arduino board (e.g., Arduino Uno)
Ultrasonic sensor (e.g., HC-SR04)
LED (e.g., high-brightness white LED)
Buzzer (e.g., active or passive buzzer)
Resistors (e.g., 220Ω for the LED and 1kΩ for the buzzer if using a passive one)
Power supply (e.g., 5V USB power supply or battery pack)
Enclosure (e.g., a small project box)
Mounting hardware
Jumper wires
Breadboard (for prototyping)
Circuit Diagram
Connect the ultrasonic sensor to the Arduino:

VCC to 5V
GND to GND
Trig to digital pin 9
Echo to digital pin 10
Connect the LED to the Arduino through a 220Ω resistor:

LED's positive leg to digital pin 6
Negative leg to the resistor, then to GND
Connect the buzzer to the Arduino:

Positive terminal to digital pin 5
Negative terminal to GND (if using a passive buzzer, connect it in series with a 1kΩ resistor)
