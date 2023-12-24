#pragma once

#include <cstdint>
#include <ctime>

class RPCData {
public:
    inline static const char* APPLICATION_ID = "1188278567155552387";
    inline static int64_t startTime = time(nullptr);
    inline static volatile bool interrupted = false;
};

