#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "SalariedEmployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(const string& first,
        const string& last, const string& ssn,const Date& cumple, double salary)
        : Employee(first, last, ssn, cumple) {
    setWeeklySalary(salary);
}

void SalariedEmployee::setWeeklySalary(double salary) {
    if (salary < 0.0) {
        throw invalid_argument("Weekly salary must be >= 0.0");
    }
    weeklySalary = salary;
}
double SalariedEmployee::getWeeklySalary() const {
    return weeklySalary;
}

double SalariedEmployee::earnings(int x) const {
    if (cumpleanos.getmes() == x ){                
        cout<<"\n********POR QUE ESTE MES ES SU CUMPLEAÑOS RESIVES UN BONO DE 100$********"<<endl;                  
        return getWeeklySalary()+100;
    }
    return getWeeklySalary();
}

string SalariedEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
        output << "salaried employee: "
        << Employee::toString()
        << "\nweekly salary: " << getWeeklySalary();
    return output.str();
}