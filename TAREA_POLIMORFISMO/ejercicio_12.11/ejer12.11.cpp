#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

void virtualViaPointer(const Employee* const);
void virtualViaReference(const Employee&);

int main() {
    cout << fixed << setprecision(2); 

    /*SalariedEmployee salariedEmployee{
            "John", "Smith", "111-11-1111",Date(21,11,2000), 800};  
    CommissionEmployee commissionEmployee{
            "Sue", "Jones", "333-33-3333",Date(20,6,2000), 10000, .06};  
    BasePlusCommissionEmployee basePlusCommissionEmployee{
            "Bob", "Lewis", "444-44-4444",Date(8,6,2000), 5000, .04, 300};
    
    vector<Employee *> employees{&salariedEmployee, &commissionEmployee,
        &basePlusCommissionEmployee};*/

    vector<Employee *> Employees(3);

    Employees[0]=new SalariedEmployee{
            "John", "Smith", "111-11-1111",Date(21,11,2000), 800};  
    Employees[1]=new CommissionEmployee{
            "Sue", "Jones", "333-33-3333",Date(20,6,2000), 10000, .06};
    Employees[2]=new BasePlusCommissionEmployee{
            "Bob", "Lewis", "444-44-4444",Date(8,6,2000), 5000, .04, 300};

    
    for(const Employee* ptr : Employees) {
        virtualViaPointer(ptr);
    }
    cout<<"/////////////////////////////////////////////////"<<endl;
    for(const Employee* ptr : Employees ) {
        virtualViaReference(*ptr);
    }
    
}

int MesActual=6;// mes actual

void virtualViaPointer(const Employee* const baseClassPtr){
    cout << baseClassPtr->toString()
        << "\nearned  $ " << baseClassPtr->earnings(MesActual) << "\n\n";
}

void virtualViaReference(const Employee& baseClassRef) {
    cout << baseClassRef.toString()
        << "\nearned $ " << baseClassRef.earnings(MesActual) << "\n\n";
}
