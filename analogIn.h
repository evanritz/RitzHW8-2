// analogIn.h
//
// Interface of the AnalogIn class
//
// Written by Evan

#ifndef ANALOGIN_H_
#define ANALOGIN_H_

#include <iostream>
#include <string>

using namespace std;

class AnalogIn {
    private:
        unsigned int number;
    public:
        AnalogIn();
        AnalogIn(unsigned int n);
        unsigned int getNumber() {return number; }
        void setNumber(unsigned int n);
        int readADCsample();
        ~AnalogIn(); 
};
#endif
