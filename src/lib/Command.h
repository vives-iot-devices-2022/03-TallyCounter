#pragma once
#include "mbed.h"

class Command {
    public: 
        Command(char* command, mbed::Callback<std::string()> callback);
        bool execute(char* command);
    
    private:
        char command[20];
        mbed::Callback<std::string()> callback;
};