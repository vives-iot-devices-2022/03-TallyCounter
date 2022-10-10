#pragma once

#include "mbed.h"
#include "TallyCounter.h"

class CommandParser {

    public:
        CommandParser(TallyCounter* counter);
        void listen();

    private:
        // BufferedSerial serial;
        TallyCounter* counter;
};