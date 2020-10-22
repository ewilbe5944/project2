// Emily Wilber
// CPSC 1070
// October 16, 2020

#include <iostream>
#include "Simulation.h"
#include "WorkPay.h"
using namespace std;

int main() {
    WorkPay wp1;
    WorkPay wp2;
    WorkPay wp3;

    wp1.storeData(8);
    wp2.storeData(14);
    cout << "WP1 hours: " << wp1.retrieveHours() << endl;
    cout << "WP1 days: " << wp1.retrieveDays() << endl;
    cout << "WP2 hours: " << wp2.retrieveHours() << endl;
    cout << "WP2 days: " << wp2.retrieveDays() << endl;
    
    wp3 = wp1 + wp2;
    cout << "WP1 + WP2 = " << wp3.retrieveHours() << endl;
    wp3 = wp1 - wp2;
    cout << "WP1 - WP2 = " << wp3.retrieveHours() << endl;
    wp3 = wp2 - wp1;
    cout << "WP2 - WP1 = " << wp3.retrieveHours() << endl;
    
    wp2++;
    cout << "WP2++ = " << wp2.retrieveHours() << endl;

    wp1--;
    cout << "WP1-- = " << wp1.retrieveHours() << endl;
    wp1--;
    cout << "WP1-- again = " << wp1.retrieveHours() << endl;

    Simulation sim;
    sim.runOneGame();

    return 0;
}