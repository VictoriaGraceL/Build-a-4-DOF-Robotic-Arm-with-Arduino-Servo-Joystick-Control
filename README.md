📚 Project Overview
This project demonstrates how to build and control a 4-Degree-of-Freedom (4-DOF) robotic arm using an Arduino Uno, joystick modules, and servo motors. The robotic arm is controlled in real time using two joysticks that send signals to four servo motors.

The project is based on the ViaGasaFamido DIY Robot Arm Kit purchased from AliExpress.

🔩 Hardware Used
 ViaGasaFamido DIY Robot Arm Kit, 4DOF Wood Mechanical Arm with sg90 Servo, Assembled for SNAM1500 

Arduino Uno R3

2x Joystick Modules (X and Y axes each)

4x SG90 Servo Motors (included in the kit)

External 5V Power Supply for Servos (recommended)

Jumper Wires

Breadboard (optional)

⚙️ Wiring Connections
Component	Arduino Pin	Notes
Joystick 1 X-axis	A0	Analog input from joystick 1
Joystick 1 Y-axis	A1	Analog input from joystick 1
Joystick 2 X-axis	A2	Analog input from joystick 2
Joystick 2 Y-axis	A3	Analog input from joystick 2
Servo 1	D3	Signal wire to servo 1
Servo 2	D4	Signal wire to servo 2
Servo 3	D6	Signal wire to servo 3
Servo 4	D10	Signal wire to servo 4
Servos Power	External 5V	Use a stable external power supply
Ground	Common Ground	All grounds must be connected together

🛠️ Assembly Instructions
The robotic arm mechanical assembly is based on the ViaGasaFamido DIY Robot Arm Kit.

You can follow this YouTube video for a similar robotic arm assembly:
▶️ 4-DOF Robotic Arm Assembly Example (YouTube)

📌 Note:
The video is for assembly reference only. The arm in the video is similar, but the exact parts or appearance may slightly vary depending on the kit you purchased.

The schematics provided in this repository are for electronic wiring demonstration only and do not show the physical layout of the robotic arm.

💻 Arduino Code
The included code reads analog joystick inputs and maps them to servo motor angles to control the robotic arm.

Quick Control Mapping:
plaintext
Copy
Edit
Joystick 1 X-axis (A0) → Servo 1 (D3)
Joystick 1 Y-axis (A1) → Servo 2 (D4)
Joystick 2 X-axis (A2) → Servo 3 (D6)
Joystick 2 Y-axis (A3) → Servo 4 (D10)
The servos directly respond to joystick movements, providing real-time manual control.

🛑 Important:
The simulation in Wokwi is for wiring demonstration only.
The robotic arm will not fully function in the simulator because simulators like Wokwi cannot physically model a robotic arm’s real-world movement.

🚀 Getting Started
Assemble the robotic arm using the provided kit instructions or the YouTube reference video.

Wire the servos and joysticks to the Arduino as shown in the wiring table.

Upload the Arduino code to the Uno.

Connect the external power supply for the servos.

Control the robotic arm using the joysticks!

⚡ Notes
Servo Power:
Do not power servos directly from the Arduino’s 5V pin. Use a stable external power source.

Simulation Disclaimer:
The wiring diagrams and simulations included here are for educational demonstration only. They do not represent the physical assembly of the robotic arm.



📄 License
This project is open-source and available under the MIT License.

