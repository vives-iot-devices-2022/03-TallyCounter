#pragma once 

#include "Command.h"
#include <vector>

class CommandManager {
    public:

        void addCommand(Command command);
        void parse(char* commandString);

    private:
        std::vector<Command> commandList;
};