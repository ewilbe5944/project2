// Emily Wilber
// CPSC 2070
// October 16, 2020

#ifndef WORK_H
#define WORK_H

using namespace std;

class WorkPay {
    private:
        double hours;

    public:    
        void storeData(int);
        double retrieveHours();
        double retrieveDays ();
        WorkPay operator+(WorkPay);
        WorkPay operator-(WorkPay);
        WorkPay operator++(int);
        WorkPay operator--(int);


};
#endif