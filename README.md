# Over-Voltage-and-Under-Voltage-Protection-System-Using-IoT
This project implements an automatic protection system using a microcontroller and IoT-based monitoring to safeguard electrical appliances from voltage fluctuations.

## 📌 Key Features
- Detects both overvoltage and undervoltage conditions
- Disconnects the load automatically via a relay
- LCD display shows voltage levels
- Microcontroller used: PIC18F46K40
- Communication via UART (EUSART)
- Real-time fault indication and safe reconnection
- Timer-based tripping logic using software

## 🔧 Components Used
- PIC18F46K40 microcontroller
- Relay module
- 16x2 LCD display
- Push buttons and LEDs
- Voltage sensor
- MPLAB X IDE & PICKIT3 programmer/debugger
- HyperTerminal for UART output

## 🧠 Software Highlights
- Interrupt-based timer and ADC reading
- Software debounce for switches
- LCD command control via `LCD_WriteByte()`
- UART serial string transmission using `sprintf()` and `UART1PrintString()`

## 📈 Applications
- Home appliances (TV, fridge, AC)
- Industrial motors
- Agricultural pump sets
