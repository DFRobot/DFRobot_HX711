/*!
 * @file DFRobot_HX711.h
 * @brief Define the basic structure of class DFRobot_HX711 
 * @details By a simple mechanical structure with the sensor, that can be read to the mass of the body
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @License     The MIT License (MIT)
 * @author [wuxiao](xiao.wu@dfrobot.com)
 * @version  V1.0
 * @date  2020-05-14
 * @url https://github.com/DFRobot/DFRobot_HX711
 */
#ifndef DFROBOT_HX711_H_
#define DFROBOT_HX711_H_
#include "Arduino.h"

class DFRobot_HX711
{
public:
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

private:
    const uint8_t _DoutPin;
    const uint8_t _SckPin;
    long _offset;
    float _scale;
};

#endif 
