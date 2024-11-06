// Exercise 12.14: BasePlusCommissionEmployee.cpp

#include <iomanip>
#include <sstream>
#include <stdexcept>

#include "BasePlusCommissionEmployee.h"

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
   const string& first, const string& last, const string& ssn,
   int month, int day, int year, double sales, double rate, double salary )
   : CommissionEmployee( first, last, ssn, month, day, year, sales, rate ) {
   setBaseSalary( salary );
}

void BasePlusCommissionEmployee::setBaseSalary( double salary ) {
   if ( salary < 0.0 )
      throw invalid_argument( "El salario debe ser >= 0.0" );
   baseSalary = salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const {
   return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
   return getBaseSalary() + CommissionEmployee::earnings();
}

string BasePlusCommissionEmployee::toString() const {

   ostringstream output;

   output << fixed << setprecision( 2 )
      << "Salario-Base " << CommissionEmployee::toString()
      << "; salario base : " << getBaseSalary();

   return output.str();
}