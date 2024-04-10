<h1 align="center">APIR 📘</h1>

![Banner](https://user-images.githubusercontent.com/79918051/236221117-d6bc9b7e-42a3-44cb-b58d-9386f9ea6426.png)

</p>
<p align="center">
    <a href="https://img.shields.io/github/downloads/GNHS-Robotics-Club/APIR/total" alt="Downloads">
        <img src="https://img.shields.io/github/downloads/GNHS-Robotics-Club/APIR/total" /></a>
    <a href="https://img.shields.io/github/issues/GNHS-Robotics-Club/APIR" alt="Issues">
        <img src="https://img.shields.io/github/issues/GNHS-Robotics-Club/APIR" /></a>
    <a href="https://img.shields.io/github/last-commit/GNHS-Robotics-Club/APIR" alt="Commits">
        <img src="https://img.shields.io/github/last-commit/GNHS-Robotics-Club/APIR" /></a>
</p>

Certain tasks in Arduino can be challenging. It requires numerous configurations to be properly utilized (e.g., pins, calculations, sensors, etc.), which can be difficult to manage as the project grows and makes the codebase difficult to read. 

**Abstract Programming Interface for Robotics**, or **APIR** for short, aims to fix these problems by providing a lightweight library that automatically does the job and hides the complexity. This is a fork of Quadraboy's (The president of Gumaca NHS Robotics Club) APIR.

## Features ⭐
- Simplicity
- Math Library
- Peripherals/Sensors support with different models.
- And more to come!

## Why use APIR? ❔

```cpp
#define PIN A0

void setup() {
    Serial.begin(9600);
    pinMode(PIN, INPUT);
}

void loop() {
    int voltage = analogRead(PIN) / 1023.0 * 5.0 * 1000;
    int celsius = (voltage - 500) / 10;
    int fahrenheit = celsius * 1.8 + 32;

    Serial.println(celcius);
    Serial.println(fahrenheit);
}
```

The following code pertains to the utilization of the TMP_36 Temperature Sensor, designed for assessing environmental temperature. Within the loop function, the initial step involves voltage computation by acquiring analog data from pin A0, subsequently dividing it by 1023, and multiplying the quotient by 5 and 1000. Following this voltage calculation, the conversion to Celsius is facilitated by deducting 500 from the voltage and then dividing the result by 10. Moreover, the Celsius reading can be further converted to Fahrenheit through the application of the appropriate conversion formula.

However, a notable issue arises from the complexity and repetitiveness inherent in these calculations, particularly when frequent temperature assessments are required. Additionally, the inherent reliance on specific calculation methods renders the code vulnerable to obsolescence upon transition to alternate sensor models, as discrepancies in design can significantly impact the accuracy and validity of the computations. With APIR, we instead do this:

```cpp
#include <APIR.h>

TemperatureSensor sensor(A0, TemperatureSensorModel::TMP_36);

void setup() {
    Serial.begin(9600);
    sensor.configure();
}

void loop() {
    int celsius = sensor.calculateTemperature(TemperatureMeasurement::CELSIUS);
    int fahrenheit = sensor.calculateTemperature(TemperatureMeasurement::FAHRENHEIT);

    Serial.println(celsius);
    Serial.println(fahrenheit);
}
```
With APIR, we can use the ```TemperatureSensor``` class to represent the TMP_36 Temperature Sensor and use its functions/methods to calculate the temperature. It also hides the complexity that is usually found when dealing with sensors.

## Installation ✔️
- Install the .zip file from the [releases](https://github.com/GNHS-Robotics-Club/APIR/releases) page.

- If you have the Arduino IDE, go to **Sketch > Include Library > Add .ZIP Library**
![image](https://user-images.githubusercontent.com/79918051/235280104-cad9c829-4d14-4910-9f49-2e85e458fb63.png)

- And finally, locate the .zip file that you've just downloaded and select it.

## Documentation 📘

An [ongoing documentation](https://github.com/GNHS-Robotics-Club/APIR/wiki) is being constructed on this repository's wiki page.

## Reporting Bugs or Errors 🐛
Does APIR have any errors or bugs when you use it? Report it at the [issues](https://github.com/GNHS-Robotics-Club/APIR/issues) tab.

When making an issue report, make sure that your issue report is very in-depth and that the issue can be reproduced or in other words, can be repeated.

## Showing Your Support ❤️
Has APIR made your life significantly easier? Consider starring or sharing this repository; it means a lot!
