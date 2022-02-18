/*!
 * @file DFRobot_HX711.cpp
 * @brief Define the basic structure of class DFRobot_HX711 
 * @details By a simple mechanical structure with the sensor, that can be read to the mass of the body
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @License     The MIT License (MIT)
 * @author [wuxiao](xiao.wu@dfrobot.com)
 * @version  V1.0
 * @date  2020-05-14
 * @url https://github.com/DFRobot/DFRobot_HX711
 */
#include "DFRobot_HX711.h"

DFRobot_HX711::DFRobot_HX711(uint8_t DoutPin, uint8_t SckPin) :
    _DoutPin(DoutPin), _SckPin(SckPin)
{
    pinMode(_SckPin, OUTPUT);
    pinMode(_DoutPin, INPUT);

    digitalWrite(_SckPin, HIGH);
    delayMicroseconds(100);
    digitalWrite(_SckPin, LOW);

    averageValue();
    this->setOffset(averageValue());
    this->setCalibration();
}

DFRobot_HX711::~DFRobot_HX711()
{

}

long DFRobot_HX711::averageValue(byte times)
{
    long sum = 0;
    for (byte i = 0; i < times; i++)
    {
        sum += getValue();
    }

    return sum / times;
}

long DFRobot_HX711::getValue()
{
    uint8_t data[3];
    long ret;
    while (digitalRead(_DoutPin));
    for (uint8_t j = 0; j < 3; j++)
    {
        for (uint8_t i = 0; i < 8; i++)
        {
            digitalWrite(_SckPin, HIGH);
            bitWrite(data[2 - j], 7 - i, digitalRead(_DoutPin));
            digitalWrite(_SckPin, LOW);
        }
    }

    digitalWrite(_SckPin, HIGH);
    digitalWrite(_SckPin, LOW);
    ret = (((long) data[2] << 16) | ((long) data[1] << 8) | (long) data[0])^0x800000;
    return ret;
}

void DFRobot_HX711::setOffset(long offset)
{
    _offset = offset;
}

void DFRobot_HX711::setCalibration(float scale)
{
    _scale = scale;
}

float DFRobot_HX711::readWeight()
{
    long val = (averageValue() - _offset);
    return (float) val / _scale;
}
