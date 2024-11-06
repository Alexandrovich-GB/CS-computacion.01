#include <iostream>
#include "Account.h"

using namespace std;

Account::Account( double b ) {
   if ( b >= 0.0 )
      balance = b;
   else {
      balance = 0.0;
      cout << "!!!!EL VALOR INGRTESADO ES INCONRRECTO!!!!" << endl;
   }
}

void Account::credit( double amount ) {
   if ( amount >= 0.0 ) balance += amount;
   else cout << "!!!!EL MONTO A AUMENTAR NO PUEDE SER NEGATIVO!!!!" << endl;
}

void Account::debit( double amount ) {
   if ( amount <= balance ) balance -= amount;
   else cout << "!!!!NO PUEDES RETIRAR MAS DINERO DEL QUE TINES!!!!" << endl;
}

double Account::getBalance() const {
   return balance;
}