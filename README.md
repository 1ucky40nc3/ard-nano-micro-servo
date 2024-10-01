# Arduino Nano Micro Servo Control

Control a Micro Servo with an [Arduino Nano].

## Requirements

### Hardware Requirements

- [Arduino Nano] (see [datasheet](docs/Arduino_Nano_Datasheet.pdf))
- [SG90 9 g Micro Servo] (see [datasheet](docs/SG9_Servo_Motor_Datasheet.pdf))

### Software Requirements

- [Arduino IDE] (version 2.3.3)
- [Wokwi] (optional)

## Build

### Build the Hardware

Connect the [SG90 9 g Micro Servo] to the [Arduino Nano] using the pin layout of Table 1.

Table 1: [SG90 9 g Micro Servo] to the [Arduino Nano] pin layout

| Arduino Nano | SG90 9 g Micro Servo |
|---|---|
| 5V | VCC(Red wire) |
| D9 | SIG(yellow/orange) |
| GND | GND(Black/Brown) |

You can also check the Wokwi [diagram](diagram.json).

### Upload the Software

Use the following steps to compile and upload the [sketch](sketch/sketch.ino) to the [Arduino Nano]:

1. Follow the [Getting Started with the Arduino Nano] steps to set up the [Arduino IDE]
2. Open the [sketch](sketch/sketch.ino) in the [Arduino IDE]
3. Configure the [Arduino IDE]
    1. Set the *board* through `Tools > Board > Arduino AVR Boards > Arduino Nano`
    2. Set the *port* through `Tools > Port > ttyUSB0` (Note: The port may depend on your machine)
    3. Set the *processor* through `Tools > Processor > ATmega328P (Old Bootloader)`
4. Upload the [sketch](sketch/sketch.ino) through `Sketch > Upload`

## Sources

- [Arduino Nano]
- [SG90 9 g Micro Servo]
- [Arduino IDE]
- [Wokwi]
- [Using the SG90 Servo Motor With an Arduino]
- [The Beginners Guide to Micro Servos]

[Arduino Nano]: https://docs.arduino.cc/hardware/nano/
[SG90 9 g Micro Servo]: https://components101.com/sites/default/files/component_datasheet/SG90%20Servo%20Motor%20Datasheet.pdf
[Arduino IDE]: https://www.arduino.cc/en/software/
[Wokwi]: https://wokwi.com/
[Getting Started with the Arduino Nano]: https://wiki-content.arduino.cc/en/Guide/ArduinoNano
[Using the SG90 Servo Motor With an Arduino]: https://www.electronics-lab.com/project/using-sg90-servo-motor-arduino/
[The Beginners Guide to Micro Servos]: https://projecthub.arduino.cc/arduino_uno_guy/the-beginners-guide-to-micro-servos-ae2a30