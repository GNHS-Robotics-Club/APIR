<h1 align="center">APIR 📘</h1>

![Banner](https://user-images.githubusercontent.com/79918051/236221117-d6bc9b7e-42a3-44cb-b58d-9386f9ea6426.png)

![download](https://img.shields.io/github/downloads/GNHS-Robotics-Club/APIR/total) ![issues](https://img.shields.io/github/issues/GNHS-Robotics-Club/APIR) ![commit](https://img.shields.io/github/last-commit/GNHS-Robotics-Club/APIR)

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

Consider the example above: This code is for the TMP_36 Temperature Sensor which measures the temperature of the environment. In the loop function, we first calculate the voltage by getting the analog data from the pin (A0), dividing it by 1023, and multiplying it by 5 and 1000. After we calculate the voltage, we then convert it to Celsius by subtracting the voltage by 500 and dividing it by 10. We can also convert the Celsius to Fahrenheit by using the conversion formula.

Now here's the problem, all I mentioned is quite a hassle, especially when doing this frequently, and the calculations become obsolete when a different model is used due to differences in design. With APIR, we instead do this:

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
With APIR, we can use the ```TemperatureSensor``` class to represent the TMP_36 Temperature Sensor and use its functions/methods to calculate the temperature. It also hides the complexity of the program.
