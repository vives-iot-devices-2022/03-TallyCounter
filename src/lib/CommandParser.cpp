#include "CommandParser.h"
#include "string.h"

CommandParser::CommandParser(TallyCounter* counter) {
    this->counter = counter;
}

void CommandParser::listen() {
    while(true) {
        char input[32];
        scanf("%s", input);

        if(strcmp(input, "INC") == 0) {
            counter->increment();
            printf("OK\n");
        } else if(strcmp(input, "RST") == 0) {
            counter->reset();
            printf("OK\n");
        } else if(strcmp(input, "VAL") == 0) {
            int value = counter->value();
            printf("%d\n", value);
        } else {
            printf("ERR\n");
        }
    }
}