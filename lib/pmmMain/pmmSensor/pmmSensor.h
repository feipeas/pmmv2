#ifndef pmmSensor_h
#define pmmSensor_h

#include <string.h>

typedef type type;

class Sensor
{
public:
  Sensor();

  // Initialize the sensor
  int init();

  // Update the valor of the sensor
  void update();

  // Return the type of the sensor (current, magnetometry, GPS, etc)
  string getSensorType();

  // Return the ID of the sensor
  int getId();

  // Return if the sensor its working or not
  bool getIsWorking();

  // Return the type of the data that the sensor returns
  type getDataType();

  // Return the lenght of the data that the sensor returns
  int getDataLength();

  // Return the data rate of the sensor
  int getDataRate();

  // Returns the last read of the sensor
  float getData();

private:
  // Type of the sensor (current,magnetometry,GPS,etc)
  string sensorType;
  unsigned id = 0;
  bool isWorking;
  type dataType = float;
  int dataLength;
  int dataRate;

  // Set actual variable if its working or not
  void setIsWorking(bool errorCode);
}

#endif
