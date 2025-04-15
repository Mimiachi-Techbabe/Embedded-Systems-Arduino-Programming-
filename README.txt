PROJECTS

1. 7 Segment Dispaly

The 7 segment display is on the upper right corner of the board. It has 7 segments and ‘a dot’
which can be noted by numbers from 0 to 7. Each number represents a pin from the arduino connected to the 7-segment display. To display a specific character or digit, we would need to turn out the segments that would form it. For example, to show the number ‘1’ we
should turn on segments 1 and 2, meaning all the other segments should be off(by setting them to LOW). The practical uses of the 7 segment display are in digital clocks, electronic meters and calculators.


2. LED
LED
This project uses the LED1 on the board. We will use the arduino to turn the LED on and off.
Connect the board to the laptop and upload the code. The practical uses of the LED can be in stimulating traffic lights.

RGB_LED
This Project depicts how to control an RGB LED which has three different colors in one LED,
using the arduino board. The colors are red, green and blue. We will use the pins connected to the LED to turn on one color and the other off.
We define the pins that are connected to the RGB LED thereafter setting them as outputs. In
our loop we set one of the pins to ‘High’ whilst setting the other to low and wait for half a second
before changing the pin to set to ‘High’. The practical uses of the LED can be in stimulating traffic lights and in various vehicles lighting.


3.MIC_LCD
In this project, We are goint to show how to print text on the liquid crystal display which is the largest screen
on the Arduino board. It contains 2 rows and 16 columns, holding text with a maximum of 16
characters for each column. It was incorporated with the MIC. Once the MIC picks a sound of <250, the LCD must turn on. The practical uses of the LCD is in calculators, monitors,digital cameras microwaves and other electronic devices.

4.OLED_Light A3
The OLED is the screen on the right side of the LEDs at the bottom. Displaying the text on the screen consists of selecting the cursor position (set in pixels), entering the text, and then "sending" all information to the screen. The Project also incorporated the light sensor. OLED_Screen's are widely used in monitors and TV's.

5.Potentiometer
We can control the brightness of the LED using a Potentiometer. A Potentiometer is a resistor whose resistance can vary. We can receive a range of analog values from 0 to 1023 back to the Arduino. Based on that value we can give a corresponding analog voltage value to the LED whose range is from 0 to 255. The potentiolmeter can be used in various devices to adjust brightness, volume, light, motorspeed etc.


6.Push_Button_7_Segment_Display_OLED_Buzzer
In this project, We are using push Buttons to start the count on the 7-Segment, and only the number 9 is used. Once the Middle button on the board is pressed, it counts 9, and the Buzzer turns on. Then,once the upper Button is pushed, the 7-segment is turned off with the Buzzer, then the oled Screen prints "WIN WIN". This simple project was depicting how a microwave works by pressing a specific button to start the count, then once its done, the buzzer turns on to notify the user that it is done and it prints specific text on the screen, then the user presses another button to open the microwae door.

7.Serial_Monitor
The Arduino IDE has a feature that can be a great help in debugging sketches or controlling Arduino from your computer's keyboard. The Serial Monitor is a separate pop-up window that acts as a separate terminal that communicates by receiving and sending Serial Data. 
Serial Data is sent over a single wire (but usually travels over USB in our case) and consists of
a series of 1's and 0's sent over the wire. Data can be sent in both directions (In our case on two wires).
To set it up, in your void setup you have to select a baud rate which is basically the rate at which the data will be transferred and that has to match the rate set in the serial monitor window. The serial monitor is useful in verifying code and debugging when doing projects using Arduino.


8.Temparature_Censor_LCD
Using the temperature sensor marked A2, we are going to print the room temperature onto the LCD. The temperature sensor is one of the analogue sensors on the board, meaning it takes analogue or physical values. 

In the setup we start by specifying the column and row values, 16 and 2. We set the cursor to 0,0 and print the text ‘TEMP [C]:’ which will not change unlike the temperature value below it.In the loop analogRead specifies the target A2 which is the temperature sensor. The cursor is set at (0,1) which is where the temperature read by the temperature sensor will be printed every
200 milliseconds. Temperature Censors are widely used in environmental heating equipment, ovens, phones(to depict temperature), airconditioners, etc.
