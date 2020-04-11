#ifndef pmmSubsystem_h
#define pmmSubsystem_h

#include <string.h>

class Subsystem
{
public:
  Subsystem();

  //Return name of the subsystem
  string getName();

  //Return if its Master or not
  bool getIsMaster();

  //Return how long the subsytem its on
  unsigned long long getMillis();

private:
  string name;
  bool isMaster;
  unsigned long long millis;
}

#endif
