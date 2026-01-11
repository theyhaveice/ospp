#pragma once
#include <string>

#include "cpu.h"
#include "enum.h"

class OS
{
  public:
    OS();

    SystemCpu cpu;

    std::string name;
    int majorVersion;
    int minorVersion;
    int patchVersion;
    std::string manufacturer;
    std::string deviceModel;
    Architecture architecture;
};
