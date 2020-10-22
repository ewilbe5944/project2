// Emily Wilber
// CPSC 1070
// October 16, 2020

#include "Simulation.h"

//moves turtle's location
void Simulation::moveTurtle (unsigned int* ptrTurtle) {
    int randNum = rand() % 100 + 1;
    if (randNum >= 1 && randNum <= 50) {
        *ptrTurtle += 3;
    }
    else if (randNum > 50 && randNum <= 75) {
        if (*ptrTurtle <= 6) {
            *ptrTurtle = 1;
        }
        else {
            *ptrTurtle -= 6;
        }
    }
    else if (randNum > 75 && randNum <= 100) {
        *ptrTurtle += 1;
        
    }
    else {
        cout << "problem in moveTortoise";
    }
}

//moves hare's location
void Simulation::moveHare (unsigned int* ptrHare) {
    int randNum = rand() % 100 + 1;
    if (randNum >= 1 && randNum <= 20) {
        *ptrHare += 9;
    }
    else if (randNum > 20 && randNum <= 25) {
        if (*ptrHare <= 12) {
            *ptrHare = 1;
        }
        else {
            *ptrHare -= 12;
        }
    }
    else if (randNum > 25 && randNum <= 55) {
        *ptrHare += 1;
    }
    else if (randNum > 55 && randNum <= 75) {
        if (*ptrHare <= 2) {
            *ptrHare = 1;
        }
        else {
            *ptrHare -= 2;
        }
    }
    else if (randNum >75 && randNum <= 100) {
        //just making sure it doesn't say its a problem
    }
    else {
        cout << "problem in moveHare";
    }
}

//prints one element of the one line of track
//is called by printTrack() for each element
void Simulation::printTrackElement(int index, unsigned int* hare, unsigned int* turtle) {
    if (*hare == *turtle && *hare == index) {
        cout << "OUCH!";
        }
    else if (*hare == index) {
        cout << "H";
    }
    else if (*turtle == index) {
        cout << "T";
    }
    else {
        cout << "-";
    }

}

//prints one line of the track per each second
void Simulation::printTrack(unsigned int* hare, unsigned int* turtle) {
    for (unsigned int i = 1; i <= 70; i++) {
        printTrackElement(i, hare, turtle);
    }
    cout << endl;
}

//main game loop to play a game
void Simulation::runOneGame() {
    bool isRunning = true;
    unsigned int turtlePosition = 1;
    unsigned int harePosition = 1;
    unsigned int *ptrTurtle = &turtlePosition;
    unsigned int *ptrHare = &harePosition;
    
    srand(time(NULL));
    printTrack(ptrHare, ptrTurtle);
    while (isRunning) {
        moveTurtle(ptrTurtle);
        moveHare(ptrHare);
        usleep(SECOND);
        printTrack(ptrHare, ptrTurtle);
        if (*ptrTurtle >= 70 && *ptrHare >= 70) {
            cout << "WOW!!! A TIE!!!" << endl;
            isRunning = false;
        }
        else if (*ptrTurtle >= 70) {
            cout << "TORTOISE WINS!!!!" << endl;
            isRunning = false;
        }
        else if (*ptrHare >= 70) {
            cout << "HARE WINS!!!" << endl;
            isRunning = false;
        }
    }

}