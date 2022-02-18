/*!
 * @file setCalibration.ino
 * @brief set the calibration value before read weight
 * @details After the program download is complete,
 * @n After calibration according to the set reference value, the serial port will print out the weight value.
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @License     The MIT License (MIT)
 * @author      [Wuxiao](xiao.wu@dfrobot.com)
 * @version  V1.0
 * @date  2019-12-02
 * @https://github.com/DFRobot/DFRobot_HX711
 */
#include <DFRobot_HX711.h>
/*!
 * @fn DFRobot_HX711
 * @brief Constructor 
 * @param pin_din  Analog data pins
 * @param pin_slk  Analog data pins
 */
DFRobot_HX711 MyScale(A2, A3);

void setup() {
  Serial.begin(9600);
  // Set the calibration 
  MyScale.setCalibration(1992);
}

void loop() {
  // Get the weight of the object
  Serial.print(MyScale.readWeight(), 1);
  Serial.println(" g");
  delay(200);
}