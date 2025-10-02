# Components List – Smart Umbrella

This document lists all the hardware components used in the Smart Umbrella project along with their quantities and descriptions.

| Component Name       | Quantity | Description |
|---------------------|----------|-------------|
| Arduino Uno R3      | 1        | Microcontroller board that controls the rain sensor, servo motor, LED |
| Rain Sensor         | 1        | Detects the presence of rain to trigger umbrella deployment automatically. |
| Servo Motor         | 1        | Rotates the umbrella arm between 0° (closed) and 180° (open) based on rain detection. |
| LED                 | 1        | Provides visual indication when rain is detected. |
| Resistor (220Ω)     | 1        | Current limiting resistor for the LED. |
| Jumper Wires        | As needed | Connects components on the breadboard. |
| Breadboard          | 1        | Base for connecting components without soldering. |

## Notes:

- The Arduino Uno acts as the brain of the system, processing rain sensor data and controlling the servo and LED.
- The servo motor rotates the umbrella arm to deploy or retract the umbrella.
- The LED lights up when rain is detected.
- Jumper wires and breadboard provide easy prototyping without soldering.
