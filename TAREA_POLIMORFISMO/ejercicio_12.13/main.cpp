#include <iomanip>
#include <iostream>
#include <typeinfo>
#include <vector>

#include "CheckingAccount.h"
#include "SavingsAccount.h"

using namespace std;

int main() {

   vector< Account* > accounts{
      new SavingsAccount{ 100.0, 3.0 },
      new CheckingAccount{ 10.0, 0.5 },
   };

   cout << fixed << setprecision( 2 );

   for ( Account* accountPtr : accounts ) {

      double amount;

      cout << "SALDO EN $" << accountPtr->getBalance() << " ("
         << typeid( *accountPtr ).name() << ")\nMONTO DEL RETIRO EN : $";
      cin >> amount;
      accountPtr->debit( amount );

      cout << "MONTO DEL DEPOSITO EN $ : ";
      cin >> amount;
      accountPtr->credit( amount );

      SavingsAccount* derivedPtr{ dynamic_cast< SavingsAccount* >( accountPtr ) };//IMPLEMENTACION DE DOWNCASTING

      if ( derivedPtr ) {
         cout << "SUMANDO LOS INTERESES DEL SALDO....." << endl;
         derivedPtr->credit( derivedPtr->calculateInterest() );
      }

      if ( accountPtr )
         cout << "EL SALDO ACTUAL EN $ : " << accountPtr->getBalance() << "\n\n";
   }

   return 0;
}