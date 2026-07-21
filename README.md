# 4 Servo Motor Sweeping simulation

---

## Table of Contents
- [Repository Contents](#repository-contents)
- [Task Overview](#task-overview)
- [Technical Specifications](#technical-specifications)
- [Circuit Connection](#circuit-connection)
- [Code Logic](#code-logic)
- [Simulation Demo](#simulation-demo)

---

## Repository Contents
* **`4_servo_motor.ino`**
* **`Circuit design Editing Components - Tinkercad - Personal - Microsoft​ Edge 2026-07-21 21-43-37`**
* **`README.md`** 
---

## Task Overview
This repository contains the code and documentation for the Servo Motor Sweep & Hold task, completed as part of the Smart Methods Robotics Training Program (July 2026).
The objective of this task is to achieve synchronized control over four servo motors to perform a single-pass sweep movement from 0 to 180 degrees upon startup, followed by a precise hold at the 90-degree center position, focusing heavily on pulse-width modulation configuration and mechanical calibration to ensure uniform movement.

---

## Technical Specifications
- **Hardware:** 4x Servo Motors, Arduino Uno R3, Breadboard, and jumper wires.
- **Library:** `<Servo.h>`
- **Calibration:** Angle 102 was selected as the exact mechanical center after practical experimentation and testing.

---

## Circuit Connection
<img width="451" height="368" alt="Screenshot 2026-07-21 211349" src="https://github.com/user-attachments/assets/f6e178a9-344f-4693-b16d-48f610d00a5b" />



---

## Code Logic
The setup phase initializes pins 3, 5, 6, and 9 with an extended pulse range of 200 to 2500 microseconds. This is followed by a sweep action using a for loop ranging from 0 to 180 degrees to ensure a smooth range of motion, and concludes with a fixed write command to angle 102 to lock the servos in place without further iteration.

---

## Simulation Demo
This project was fully designed, coded, and validated using the Tinkercad simulation environment.



