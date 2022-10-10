#pragma once

class TallyCounter {
    public:
        TallyCounter();
        void increment();
        void reset();
        int value();
    private:
        int counter;
};