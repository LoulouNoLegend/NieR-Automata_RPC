#pragma once

#include <cstdint>
#include <ctime>

class RPCData {
public:
    inline static const char* APPLICATION_ID = "1181021310739042304";
    inline static int64_t startTime = time(nullptr);
    inline static volatile bool interrupted = false;
};

