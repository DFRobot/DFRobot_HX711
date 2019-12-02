/*!
 * @file setCalibration.ino
 *
 * @n After the program download is complete,
 * @n After calibration according to the set reference value, the serial port will print out the weight value.
 *
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @licence     The MIT License (MIT)
 * @author      [Wuxiao](xiao.wu@dfrobot.com)
 * @version  V1.0
 * @date  2019-12-02
 * @get from https://www.dfrobot.com
 */
#include <DFRobot_HX711.h>
DFRobot_HX711 MyScale(A2, A3);

void setup() {
  Serial.begin(9600);
  MyScale.setCalibration(1992);
}

void loop() {
  
  Serial.print(MyScale.readWeight(), 1);
  Serial.println(" g");
  delay(200);
}