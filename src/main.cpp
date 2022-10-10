
#include "mbed.h"
#include "./lib/TallyCounter.h"
#include "./lib/CommandParser.h"


int main() {

    TallyCounter tallyCounter;
    CommandParser parser(&tallyCounter);
    
    printf("--- Tally Counter App ---\n");
    parser.listen();

    return 0;
}