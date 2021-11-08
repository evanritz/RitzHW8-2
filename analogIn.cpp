// analogIn.cpp
// 
// Implementation of the AnalogIn class
// 
// WARNING: Must set number before calling readADCsample()
//
// Written by Evan

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include "analogIn.h"

using namespace std;

#define ADC_PATH "/sys/bus/iio/devices/iio:device0/in_voltage"

AnalogIn::AnalogIn() {}

AnalogIn::AnalogIn(unsigned int n) {
    number = n;
}

void AnalogIn::setNumber(unsigned int n) {
    number = n;
}

int AnalogIn::readADCsample() {
    ostringstream s;
    int adc_val = -1;
    s << ADC_PATH << number << "_raw";
    fstream fs;
    fs.open(s.str(), fstream::in);
    fs >> adc_val;
    fs.close();
    return adc_val;
}

AnalogIn::~AnalogIn() {
    cout << "Destorying AIN" << number << " Object" << endl;
}
