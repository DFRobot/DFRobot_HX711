/*!
 * @file readWeight.ino
 * @brief Get the weight of the object
 * @details After the program download is complete,
 * @n The serial port will print the current weight
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @License     The MIT License (MIT)
 * @author      [Wuxiao](xiao.wu@dfrobot.com)
 * @version  V1.0
 * @date  2020-12-26
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
}

void loop() {
  // Get the weight of the object
  Serial.print(MyScale.readWeight(), 1);
  Serial.println(" g");
  delay(200);
}