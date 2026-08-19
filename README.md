# Bluetooth-Based AC Load Switching System (ESP32)

Wireless control of a 230V AC bulb using an ESP32 microcontroller, a relay module, 
and Bluetooth Classic communication from a smartphone.

## Abstract
This project implements a Bluetooth-controlled AC load system using the ESP32 and a 
relay module. Commands sent from a smartphone over Bluetooth switch an AC bulb ON or 
OFF via the relay, demonstrating a low-cost, energy-efficient home automation concept.

## Objectives
- Design a wireless AC load control system
- Interface a relay module with ESP32
- Control AC appliances using Bluetooth
- Understand safe handling of high-voltage circuits
- Implement embedded programming using Arduino IDE

## Components Used
- ESP32 DevKit V1
- 1-Channel 5V Relay Module
- AC Bulb (230V) + Bulb Holder
- Connecting Wires
- 5V Power Supply
- Smartphone with a Bluetooth serial terminal app

## Block Diagram
Smartphone → (Bluetooth) → ESP32 → Relay Module → AC Bulb

## Working Principle
1. The smartphone sends a Bluetooth command (`1` or `0`) to the ESP32.
2. The ESP32 reads the command and sets GPIO 23 accordingly.
3. `1` → Relay turns ON → AC circuit completes → Bulb glows.
4. `0` → Relay turns OFF → Circuit breaks → Bulb turns off.

The relay acts as an electrically controlled switch, safely isolating the 
low-voltage ESP32 logic from the high-voltage AC side.

## Circuit Description
- Relay IN pin → GPIO 23 of ESP32
- Relay VCC → ESP32 5V, Relay GND → ESP32 GND
- AC side: Live wire → COM, NO → one bulb terminal, other bulb terminal → Neutral
- NC terminal unused

## Advantages
- Wireless control, low cost, easy to implement, energy efficient, safe isolation via relay

## Applications
- Home automation, smart lighting, remote appliance control, industrial switching

## Future Scope
- Control multiple devices, switch to Wi-Fi/IoT control, add a mobile app UI, 
  voice control (Google Assistant/Alexa), current monitoring sensor

## ⚠️ Safety Note
This project involves 230V AC mains wiring. Always disconnect power before wiring, 
double-check connections, and use proper insulation. If unsure, consult someone 
experienced with mains electrical work.

## Author
Khushnuda Shaik — B.Tech ECE
