#include "TallyCounter.h"

TallyCounter::TallyCounter() {
    counter = 0;
}

void TallyCounter::increment() {
    counter++;
}

void TallyCounter::reset() {
    counter = 0;
}

int TallyCounter::value() {
    return counter;
}