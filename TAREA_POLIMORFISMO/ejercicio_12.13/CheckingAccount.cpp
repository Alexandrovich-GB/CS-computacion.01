#include "CheckingAccount.h"

CheckingAccount::CheckingAccount( double b, double f )
   : Account::Account( b ), fee{ f > 0.0 ? f : throw "!!!TARIFA INVALIDA!!!" } {
}

void CheckingAccount::credit( double amount ) {
   Account::credit( amount - fee );
}

void CheckingAccount::debit( double amount ) {
   Account::debit( amount + fee );
}