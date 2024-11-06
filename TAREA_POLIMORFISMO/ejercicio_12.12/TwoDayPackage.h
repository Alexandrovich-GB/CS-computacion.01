#ifndef TWO_H
#define TWO_H
#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Paquete.h"

using namespace std;

class TwoDayPackage : public Paquete{
public:
    TwoDayPackage(const string &,const string &, const string &,const string &,const int &,const int &,const int &,const int &);
    virtual double CalcularCosto()const override;
private:
    double precioadicional=5;
};


#endif