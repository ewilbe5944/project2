// Emily Wilber
// CPSC 1070
// October 16, 2020

#ifndef SIM_H
#define SIM_H

#include "Simulation.h"
#include <iostream>
#include <unistd.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

class Simulation {
    private:
        void moveTurtle (unsigned int*);
        void moveHare (unsigned int*);
        static const int SECOND = 1000000; // how many microseconds in a second
        void printTrackElement(int, unsigned int*, unsigned int*);
        void printTrack(unsigned int*, unsigned int*);

    public: 
        void runOneGame();
};

#endif



