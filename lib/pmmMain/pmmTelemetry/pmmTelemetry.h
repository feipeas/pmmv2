#ifndef pmm_h
#define pmm_h

#include <string.h>

class Telemetry
{
public:
  Telemetry();

  // Initializing the telemetry
  int init();

  // Returns update telemetry reception
  int updateReception();

  // Returns update telemetry transmission
  int updateTransmission();

  // Returns sent rate
  int getSendRate();

  // Sets send rate
  void setSendRate(unsigned sendRate);

  // Add to queue
  int addQueue(float queue);

  // Retruns if is avaible send telemetry
  int sendIfAvaiable(float ifIsAvaible);

private:
  bool isWorking;
  int sendRate;
};

#endif
