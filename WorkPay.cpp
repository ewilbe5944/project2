// Emily Wilber
// CPSC 1070
// October 16, 2020

#include "WorkPay.h"

    void WorkPay::storeData(int numHours) {
        hours = numHours;
    }

    double WorkPay::retrieveHours() {
        return hours;
    }

    double WorkPay::retrieveDays () {
        return hours / 8.0;
    }

    WorkPay WorkPay::operator+(WorkPay b) {
         WorkPay wp;
         wp.storeData(static_cast<int>(retrieveHours() + b.retrieveHours()));
         return wp;
    }

    WorkPay WorkPay::operator-(WorkPay b) {
         WorkPay wp;
         int numHours = static_cast<int>(retrieveHours() - b.retrieveHours());
         if (numHours <= 0) {
             wp.storeData(0);
         }
        else {
            wp.storeData(numHours);
        }
         return wp;
    }  

    WorkPay WorkPay::operator++(int) {
         WorkPay wp;
         storeData(hours + 8);
         return wp;
    }  

    WorkPay WorkPay::operator--(int) {
         WorkPay wp;
         if (hours <= 8) {
             storeData(0);
         }
         else {
            storeData(hours - 8);
         }
         return wp;
    }  
        WorkPay WorkPay::operator++() {
         WorkPay wp;
         storeData(hours + 8);
         return wp;
    }  

    WorkPay WorkPay::operator--() {
         WorkPay wp;
         if (hours <= 8) {
             storeData(0);
         }
         else {
            storeData(hours - 8);
         }
         return wp;
    }  