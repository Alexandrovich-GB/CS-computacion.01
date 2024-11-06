#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "CommissionEmployee.h" // CommissionEmployee class definition
using namespace std;

CommissionEmployee::CommissionEmployee(const string& first,
        const string& last, const string& ssn,const Date& cumple, double sales, double rate)
        : Employee(first, last, ssn, cumple) {       
    setGrossSales(sales); // validate and store gross sales
    setCommissionRate(rate);
}

void CommissionEmployee::setGrossSales(double sales) {
    if (sales < 0.0) {
        throw invalid_argument("Gross sales must be >= 0.0");
    }
    grossSales = sales;
}
double CommissionEmployee::getGrossSales() const {return grossSales;}

void CommissionEmployee::setCommissionRate(double rate) {
    if (rate <= 0.0 || rate >= 1.0) {
        throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
    }
    commissionRate = rate;
}
double CommissionEmployee::getCommissionRate() const {
    return commissionRate;
}

double CommissionEmployee::earnings(int x) const {
    if (cumpleanos.getmes() == x ){  
        cout<<"\n********POR QUE ESTE MES ES SU CUMPLEAÑOS RESIVES UN BONO DE 100$********"<<endl;                  
        return getCommissionRate() * getGrossSales() +100 ;
    }
    return getCommissionRate() * getGrossSales();
}

string  CommissionEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2); // two digits of precision
    output << "commission employee: " << Employee::toString()
    << "\ngross sales: " << grossSales
    << "\ncommission rate: " << commissionRate;
    return output.str();
}


