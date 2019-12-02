# HX711-Arduino
HX711 is a 24-bit A / D converter chip designed for high-precision electronic scales.<br>
This example is suitable for HX711 sensor and read data through Arduino.<br>


## DFRobot_HX711 Library for Arduino
---------------------------------------------------------

Provide an Arduino library to get weight by reading data from HX711.

## Table of Contents

* [Summary](#summary)
* [Installation](#installation)
* [Methods](#methods)
* [Compatibility](#compatibility)
* [History](#history)
* [Credits](#credits)

## Summary

Provide an Arduino library to get weight by reading data from HX711.

## Installation

To use this library, first download the library file, paste it into the \Arduino\libraries directory, then open the examples folder and run the demo in the folder.

## Methods

```C++

#include <DFRobot_HX711.h>

/*
 * @brief Read weight.
 * @return The currently obtained weight in grams (g).
 */
float readWeight();

/*
 * @brief Set the calibration base value. The default value is 1992.
 */
void setCalibration(float base = 1992.f);


```

## Compatibility

MCU                | Work Well    | Work Wrong   | Untested    | Remarks
------------------ | :----------: | :----------: | :---------: | -----
Arduino uno        |      √       |              |             | 
Mega2560        |      √       |              |             | 


## History

- data 2019-12-02
- version V0.1


## Credits

Written by(xiao.wu@dfrobot.com), 2019. (Welcome to our [website](https://www.dfrobot.com/))
