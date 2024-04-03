//BLE libraries
#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>
#include <BLE2902.h>

#include <Wire.h> //For I2C (qwiic bus)
#include <Preferences.h> //For saving calibration data to EEPROM
#include "SparkFunLSM6DSO.h" //For IMU sensors
#include "SparkFun_Qwiic_Scale_NAU7802_Arduino_Library.h" //For scale
#include <CircularBuffer.h> //For watts averagi