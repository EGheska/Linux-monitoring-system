#ifndef SYSTEM_H
#define SYSTEM_H

#include <string>
#include <vector>


#include "processor.h"

class System {
 public:
  Processor& Cpu();
  float MemoryUtilization();
  long UpTime();
  int TotalProcesses();
  int RunningProcesses();
  std::string Kernel();
  std::string OperatingSystem();

 private:
  Processor cpu_ = {};
};

#endif

