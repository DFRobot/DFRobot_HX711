# DFRobot_HX711
- [中文版](./README_CN.md)

HX711 is a 24-bit A / D converter chip designed for high-precision electronic scales.<br>
This example is suitable for HX711 sensor and read data through Arduino.<br>


![Product Image](./resources/images/SEN0160.jpg)

## Product Link (https://www.dfrobot.com/product-1031.html)
    SEN0160: Gravity: Digital Weight Sensor
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


    /*!
     * @fn DFRobot_HX711
     * @brief Constructor 
     * @param pin_din  Analog data pins
     * @param pin_slk  Analog data pins
     */
    DFRobot_HX711(uint8_t pin_din, uint8_t pin_slk);
    ~DFRobot_HX711();
	
    /*!
     * @fn getValue
     * @brief Get the weight of the object
     * @return return the read weight value, unit: g
     */
    long getValue();
	
    /*!
     * @fn averageValue
     * @brief Get the average of multiple measurements
     * @param times Take the average several times
     * @return return the read weight value, unit: g
     */
    long averageValue(byte times = 25);

    /*!
     * @fn setOffset
     * @brief peel
     * @param offset skin value
     */
    void setOffset(long offset);
	
    /*!
     * @fn setCalibration
     * @brief set calibration value
     * @param base calibration value
     */
    void setCalibration(float base = 1992.f);

    /*!
     * @fn readWeight
     * @brief Get the weight of the object after peel
     * @return return the read weight value, unit: g
     */
	float readWeight();


```

## Compatibility

MCU                | Work Well    | Work Wrong   | Untested    | Remarks
------------------ | :----------: | :----------: | :---------: | -----
Arduino uno        |      √       |              |             | 
FireBeetle-ESP8266        |      √       |              |             | 
FireBeetle-ESP32        |      √       |              |             | 
mpython        |      √       |              |             | 
microbit        |      √       |              |             | 


## History

- 2019/12/02 - Version 1.0.0 released.

## Credits

Written by wuxiao(xiao.wu@dfrobot.com), 2019. (Welcome to our [website](https://www.dfrobot.com/))
