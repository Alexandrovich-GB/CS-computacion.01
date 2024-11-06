#include "SavingsAccount.h"

SavingsAccount::SavingsAccount( double b, double r )
   : Account::Account( b ), rate{ r > 0.0 ? r : throw "!!!BALOR NO PERMITIDO!!!" } {
}

double SavingsAccount::calculateInterest() const {
   return getBalance() * rate / 100;
}