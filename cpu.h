#pragma once
#include <string>

#include "enum.h"

class SystemCpu
{
    public:
        SystemCpu();

        Architecture architecture;
        int physicalCores;
        int logicalCores;
};
