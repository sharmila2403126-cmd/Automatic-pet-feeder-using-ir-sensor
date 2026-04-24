# Automatic-pet-feeder-using-ir-sensor
This project is an automatic pet feeder that dispenses food when a pet is detected using an IR sensor. A servo motor is used to open and close the food container automatically.
Working Principle

This system uses an IR sensor to detect the presence of a pet near the feeder. When the pet comes close, the IR sensor sends a signal to the Arduino. The Arduino then activates a servo motor, which opens the food container to dispense food. After a short delay, the servo returns to its original position, closing the container.

🔌 Connections
IR Sensor
VCC → 5V
GND → GND
OUT → Pin 7
Servo Motor
Red → 5V
Brown → GND
Orange → Pin 6
⚙️ Features
Automatic feeding system
Touch-free operation
Simple and low-cost design
Easy to build for beginners
💡 Advantages
Ensures pets are fed automatically
Reduces manual effort
Useful for busy pet owners
⚠️ Limitations
May trigger if any object passes
No fixed feeding schedule
Needs proper power supply for servo
🚀 Future Improvements
Add timer for scheduled feeding
Use weight sensor for portion control
Add IoT control (mobile app)
Use camera for pet recognition
