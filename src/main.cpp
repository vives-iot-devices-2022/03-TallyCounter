
#include "mbed.h"
#include "./lib/TallyCounter.h"
#include "./lib/CommandManager.h"


int main() {

    TallyCounter tallyCounter;
    CommandManager commandManager;

    commandManager.addCommand(
        Command("INC", [&tallyCounter]() {
            tallyCounter.increment();
            return "OK";
        })
    );

    commandManager.addCommand(
        Command("RST", [&tallyCounter]() {
            tallyCounter.reset();
            return "OK";
        })
    );

    commandManager.addCommand(
        Command("VAL", [&tallyCounter]() {
            return std::to_string(tallyCounter.value());
        })
    );
    
    printf("--- Tally Counter App ---\n");
    
    while(true){
        char input[32];
        scanf("%s", input);

        commandManager.parse(input);
    }

    return 0;
}