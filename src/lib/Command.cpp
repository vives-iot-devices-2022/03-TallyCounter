
#include "Command.h"
#include "string.h"


Command::Command(char* command, mbed::Callback<std::string()> callback){
    strcpy(this->command, command);
    this->callback = callback;
}

bool Command::execute(char* command) {
    if(strcmp(command, this->command) == 0) {
        std::string result = callback();
        printf("%s\n", result.c_str());
        return true;
    }
    return false;
}