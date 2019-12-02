#ifndef DFROBOT_HX711_H_
#define DFROBOT_HX711_H_
#include "Arduino.h"

class DFRobot_HX711
{
public:
    DFRobot_HX711(uint8_t pin_din, uint8_t pin_slk);
    ~DFRobot_HX711();
    long getValue();
    long averageValue(byte times = 25);
    void setOffset(long offset);
    void setCalibration(float base = 1992.f);
    float readWeight();

private:
    const uint8_t _DoutPin;
    const uint8_t _SckPin;
    long _offset;
    float _scale;
};

#endif 
