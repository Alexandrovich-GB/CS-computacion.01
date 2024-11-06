// Exercise 12.14: ex_12_14.cpp
// Payroll-System Modification

#include <iomanip>
#include <iostream>
#include <typeinfo>
#include <vector>

#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "Employee.h"
#include "HourlyWorker.h"
#include "PieceWorker.h"
#include "SalariedEmployee.h"

using namespace std;

const int CURRENT_MONTH{ 5 }; // test

int main() {

   cout << fixed << setprecision( 2 );

   vector< Employee* > employees{
      new SalariedEmployee(
         "Juan", "Quispe", "111-11-1111", 5, 1, 1990, 800 ),
      new CommissionEmployee(
         "Pedro", "Mamani", "333-33-3333", 2, 29, 2000, 10000, .06 ),
      new BasePlusCommissionEmployee(
         "Bob", "Mendoza", "444-44-4444", 12, 31, 1999, 5000, .04, 300 ),
      new PieceWorker(
         "Rodrigo", "Jacinto", "555-55-5555", 11, 1, 2001, 3.1, 250 ),
      new HourlyWorker(
         "Camila", "Gonnzales", "666-66-6666", 6, 6, 1986, 11.0, 42 ) };

   for ( Employee* employeePtr : employees ) {

      cout << employeePtr->toString() << endl;

      BasePlusCommissionEmployee* derivedPtr{
         dynamic_cast< BasePlusCommissionEmployee* >( employeePtr ) };

      if ( derivedPtr ) {
         derivedPtr->setBaseSalary( 1.1 * derivedPtr->getBaseSalary() );
         cout << "El nuevo salaio base con un aumento del 10% en:$ "
            << derivedPtr->getBaseSalary() << endl;
      }

      if ( employeePtr )
         cout << "Ganacia en $" << employeePtr->earnings() +
            ( employeePtr->getBirthDate().getMonth() == ::CURRENT_MONTH ?
              100.0 : 0.0 ) << "\n\n";
   }

   for ( const Employee* employeePtr : employees ) {
      cout << "Eliminando obejto  " << typeid( *employeePtr ).name() << endl;
      delete employeePtr;
   }

   return 0;
}