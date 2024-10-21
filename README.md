# Smart Coffee Machine

This project upgrades a Gaggia Paros espresso machine with smart controls to improve your coffee-making experience. By adding a display and custom electronics, you can monitor and control the machine more easily.

![](docs/assets/gaggia-init.png)
![](docs/assets/gaggia-brew.png)

## Features

- **Temperature Control**: Monitor the boiler temperature to ensure optimal brewing conditions.
- **Pump Control**: Start and stop the pump with the press of a button.
- **Safety Features**: Automatic shutoff if the system becomes unresponsive or overheats.
- **User Interface**: Simple, intuitive display to control and monitor the machine.

## Hardware

- **Gaggia Paros Espresso Machine**
- **ESP32-S3 Display**: Runs the user interface and communicates with the system.
- **STM32F401**: Handles the machine’s low-level control.
- **K-Type Thermocouple with MAX6675**: Reads the temperature of the boiler.
- **AC SSR and Mosfet Board**: Controls the heating element (boiler).
- **5V Relay**: Controls the pump.

## How It Works

The display allows you to control the espresso machine and see live temperature updates. If the machine becomes unresponsive or the temperature goes too high, it will automatically turn off for safety.

## Installation

1. Connect the ESP32-S3 Display, STM32F401, and other components to the Gaggia Paros.
2. Upload the firmware to both microcontrollers.
3. Enjoy your smarter coffee-making experience!