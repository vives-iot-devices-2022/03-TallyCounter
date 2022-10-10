#include "TallyCounter.h"

TallyCounter::TallyCounter() {
    reset();
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