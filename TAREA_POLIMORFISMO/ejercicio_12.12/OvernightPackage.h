#ifndef OVER_H
#define OVER_H
#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Paquete.h"

using namespace std;

class OvernightPackage : public Paquete{
public:
    OvernightPackage(const string &,const string &, const string &,const string &,const int &,const int &,const int &,const int &);
    virtual double CalcularCosto()const override;
private:
    double precioadicional=10;   
};

#endif