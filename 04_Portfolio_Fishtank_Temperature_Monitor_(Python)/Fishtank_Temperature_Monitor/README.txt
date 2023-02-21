0. In Python, indentation matters.
1. You will need to install w1thermsensor library on your Pi to run the code
2. You will refer to both my code (procedures) and my Youtube video to make your life easier
===========================================================

(link to my Youtube video): https://youtu.be/hgQYIaZeUqo

===========================================================

*** pls lmk if there's typo in the code. appreciate it ***

===========================================================

""" Written by javaLearner13 """
""" my fishtank temperature monitor project for school """
""" written in Python """
""" you need w1thermsensor library ready on your Pi to run this code """
""" tools that I used for the project
    1. a Raspberry Pi 4 
    2. a DS18B20 temperature probe
    3. a breadboard
    4. a 4.7k ohm
    5. a 300 ohm
    6. male to male wires
    7. male to female wires
    8. an led
    9. an ethernet cable
    10. w1thermsensor library
    11. Python
    Project Goal:
    Create a temperature logger using a Raspberry Pi to monitor the temperature of fish tank that gives you a warming when the temperature is not ideal.
    # WARNING #
    # If you are referring to the procedures below, you will need visual support from my Youtube video
    # link: https://youtu.be/hgQYIaZeUqo
    Procedures:
    0.  Format sd card > install pi image file > create a text file named SSH and remove extension > set up internet connection (either wireless or ethernet) > install Python3 on raspberry pi > update and upgrade pi software > login to Putty, VNC, and go to settings to enable 1-Wire option
    1.	Connect wire from Pi to breadboard for power (3v3 power pin to breadboard far left top corner +slot)
    2.	Connect Ground pin to breadboard (ground pin to -slot)
    3.	GPIO4 to f15 (for probe setup)
    4.	GPIO18 to a22 (for led setup)
    5.	300 ohm (for LED. -, c23)
    6.	LED (for warnings when temperature is not ideal. Positive side at e24)
    7.	Male to male (- to f13)
    8.	Male to male (+ to f14)
    9.	4.9k ohm (for temperature probe. h14, h15)
    10.	Connect DS18B20 (red: VCC, yellow: DQ(output), black: GROUND)
        black: i13, red: i14, yellow: i15
    11.	Connect ethernet cable from Raspberry to laptop (power connected). Put temperature probe in the fish tank.
    12.	DS18B20 connection verification:
        1.	Inside raspberry terminal, type sudo modprobe w1-gpio (this lets Pi know that the probe is connected.)
        2.	Then type sudo modprobe w1-therm (gives pi the ability to measure temperature)
        3.	Type sudo nano /etc/modules (enabling auto load everything after each reboot)
        4.	Type cd /sys/bus/w1/devices to go to the directory
        5.	Type ls (it’s L, not a number)… this gives you the unique code of your sensor.
        6.	If it’s 28-xxxxxxxxxxx go to the directory by typing cd 28-xxxxxxxxxxx
            (if it starts with 00-… that means pi is not recognizing your sensor.)
        7.	Install w1thermsensor library by typing sudo apt-get install python-w1thermsensor
    13.	Login to PuTTY, go to VNC, go to home folder and write the program.
    
"""