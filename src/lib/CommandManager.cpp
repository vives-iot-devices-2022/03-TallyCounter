#include "CommandManager.h"

void CommandManager::addCommand(Command command) {
    commandList.push_back(command);
}

void CommandManager::parse(char* commandString) {
    bool success = false;

    for (Command command : commandList) {
        success |= command.execute(commandString);
    }

    if(!success) {
        printf("ERR\n");
    }
}