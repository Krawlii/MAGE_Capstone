# Capstone Project: Wearable Ant-Cheating Device with Motion Detection and Alert System using Arduino
Achievements
2nd Place - Research Exhibit 2023, OLFU CCS
This recognition was awarded for our innovative project at the OLFU College of Computer Studies' Research Exhibit, showcasing our team skills in research and development.

## Components Used (Prototype Phase)

- **Arduino UNO**: The brain of the project, handling all sensor input and output.
- **PIR Motion Sensor**: Detects suspicious movements and triggers the alert system.
- **Buzzer**: Alerts when cheating is detected.
- **LEDs**: Provides visual indicators for status updates.
- **Resistors (220 Ohm, 10k Ohm)**: Used to limit current and protect components.
- **Jumper Wires**: Connects all the components together.
- **Breadboard**: Allows for easy, temporary wiring of components during prototyping.

---

## Components Used (Final Phase)

- **Arduino Nano**: A more compact version of the Arduino for the final wearable design.
- **MPU-6050 Gyroscope**: Used for detecting motion in three-dimensional space.
- **LEDs**: Used for visual alerts and status indicators.
- **Resistors (220 Ohm, 10k Ohm)**: Ensure safe operation of components.
- **Jumper Wires**: Flexible wiring for the final assembly.
- **Original 3D Printed Model Case**: Custom-designed case for the wearable device.
- **Battery**: Powers the device for portable use.
- **Charging Port**: Enables recharging of the battery for continuous use.

---

## Libraries Used

```cpp
#include <MPU6050_tockn.h>
#include <Wire.h>

