#ifndef pmmData_h
#define pmmData_h

#include <string.h>

class Data
{
public:
  Data();

  // Returns id of current session
  string getSessionId();

  // Returns the type of memory (EEPROM or SD)
  string getMemoryType();

  // Returns if specific memory it's working
  bool getIsWorking(string memoryType);

  // Returns data read
  float readData(string dataToRead);

  // Returns write data in a memory
  int writeData(float dataToWrite);

  // Returns whether the directory exist or not
  bool existsDir(string dirExists);

  // Add a directory on 'dir' adress
  int addDir(string dirToAdd);

  // Remove a dir and returns a code error
  int removeDir(string dirToRemove);

  // Open an archive
  int open(string fileToOpen);

  // Close an archive
  int close(string fileToClose);

private:
  void setIsWorking(bool errorCode);

  string sessionId;
  string memory;
  bool isWorking;
};

#endif
