# RoboDrive


<div align="center">

#  RoboDrive

### Bluetooth-Controlled Smart Robotic Car

**Control Your Drive, Wirelessly!**

<img src="https://img.shields.io/badge/Platform-Arduino%20UNO-blue?style=for-the-badge&logo=arduino"/>
<img src="https://img.shields.io/badge/Communication-Bluetooth-blue?style=for-the-badge&logo=bluetooth"/>
<img src="https://img.shields.io/badge/Language-C%2B%2B-orange?style=for-the-badge&logo=cplusplus"/>

</div>

---

## 📌 About The Project

RoboDrive is a Bluetooth-controlled robotic car developed using Arduino UNO and an HC-05 Bluetooth module.

The car receives wireless commands from an Android smartphone through Bluetooth and performs different movements such as forward, backward, left, right and stop.

This project demonstrates the practical use of embedded systems, wireless communication, motor control and robotics.

## ✨ Features

-  Wireless Bluetooth control
-  Forward movement
-  Backward movement
-  Left movement
-  Right movement
-  Stop functionality
-  LED indicator
-  Easy-to-build hardware design

##  Hardware Components

| Component | Purpose |
|---|---|
| Arduino UNO R3 | Main controller |
| HC-05 Bluetooth Module | Wireless communication |
| L298N Motor Driver | Motor control |
| 4 × BO Motors | Car movement |
| 4 × Wheels | Motion |
| Battery Pack | Power supply |
| Jumper Wires | Connections |
| Chassis | Car body |
| LED | Status indication |

##  Software Requirements

- Arduino IDE
- Android Bluetooth Controller App
- Arduino C/C++ programming
- Bluetooth serial communication

##  Working Principle

1. The HC-05 module connects with an Android smartphone.
2. The smartphone sends commands through Bluetooth.
3. Arduino UNO receives the commands.
4. Arduino processes the received characters.
5. The L298N motor driver controls the DC motors.
6. The car moves according to the selected command.

##  Bluetooth Commands

| Command | Action |
|---|---|
| F | Forward |
| B | Backward |
| L | Left |
| R | Right |
| S | Stop |

##  Arduino Pin Configuration

| Arduino Pin | Connection |
|---|---|
| D13 | Left motor forward input |
| D12 | Left motor reverse input |
| D11 | Right motor forward input |
| D10 | Right motor reverse input |
| D9 | LED indicator |
| D2 | Bluetooth RX (Arduino receives) |
| D3 | Bluetooth TX (Arduino transmits) |

*The Bluetooth wiring assumes SoftwareSerial. Connect HC-05 TX to Arduino D2 and Arduino D3 to HC-05 RX through a suitable voltage divider.*

##  Installation & Setup

1. Download or clone this repository.
2. Open Arduino IDE.
3. Open `Arduino_Code/RoboDrive.ino`.
4. Connect Arduino UNO to your computer.
5. Select Arduino UNO board and the correct COM port.
6. Upload the code.
7. Power the car and pair the HC-05 module with your smartphone.
8. Open a Bluetooth controller application.
9. Send F, B, L, R or S commands.

##  Project Structure

```text
RoboDrive-Bluetooth-Car/
│
├── README.md
├── Arduino_Code/
│   └── RoboDrive.ino
├── Images/
├── Circuit_Diagram/
└── LICENSE
```

##  Future Improvements

- Add obstacle detection using ultrasonic sensors.
- Add voice command functionality.
- Add mobile application control.
- Add Wi-Fi-based remote control.
- Add live camera streaming.
- Add autonomous navigation.

##  Learning Outcomes

- Arduino programming
- Bluetooth communication
- DC motor control
- Embedded systems
- Basic robotics
- Hardware integration

## 👨‍💻 Developer

**Abhishek Mandal**

GitHub: [abhishekmandal108-beep](https://github.com/abhishekmandal108-beep)

LinkedIn: [Connect on LinkedIn](https://www.linkedin.com/in/abhishek-kumar-2126a1404/)

---

<div align="center">

### ⭐ If you like this project, consider giving it a star!

**Built with ❤️ using Arduino and Robotics**

</div>
