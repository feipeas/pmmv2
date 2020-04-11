#ifndef pmmBus_h
#define pmmBus_h

class Bus
{
public:
  Bus();

  // Return if its working or not
  bool getIsWorking();

  // Return if its Master or not
  bool getIsMaster();

  // Read a message from another µC
  int readMessage(float message);

  // Send a message to another µC
  int sendMessage(float message);

private:
  bool isWorking;
  bool isMaster;

  // Set actual variable if it's working or not
  void setIsWorking(bool errorCode);
};

#endif
