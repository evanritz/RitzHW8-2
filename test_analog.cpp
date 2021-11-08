// test_analog.cpp
//
// This program takes no arguments
// This program is testing AnalogIn class
// defined in analogIn.cpp and analogIn.h
// This program inits AnalogIn Object as Analog pin 0
// Prints out its number and gets its ADC value on the pin
//
// Written by Evan

#include <iostream>
#include "analogIn.h"

using namespace std;

int main(int argc, char* argv[]) {
    
    AnalogIn AIN(0);

    cout << "AIN" << AIN.getNumber() << " ADC Sample is: " << AIN.readADCsample() << endl;

}
