#ifndef pmmHealth_h
#define pmmHealth_h

#include <string.h>

class Health
{
public:
  Health();

  // Add the error code
  void addCodeError(string errorCodeName, int errorCode);

  // Returns status board
  int statusBoard(string boardName);

  // Returns if is ready to fly
  bool isReady();

private:
  // Abort the operation
  void abortOperantion();
};

#endif
