
#include "mbed.h"
#include "./lib/TallyCounter.h"


int main() {

    TallyCounter tallyCounter;

    printf("%d\n", tallyCounter.value());
    tallyCounter.increment();
    tallyCounter.increment();
    printf("%d\n", tallyCounter.value());
    tallyCounter.reset();
    printf("%d\n", tallyCounter.value());

    return 0;
}