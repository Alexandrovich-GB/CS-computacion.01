#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

int main(){
    Account myAccount1{"Jesusm Green"};
    Account myAccount2{"pedro "};
    cout<< "El nombRE inicial de la cuenta es: "
            << myAccount1.getName()<< endl;
    cout<< "El nombRE inicial de la cuenta es: "
            << myAccount2.getName();

    cout <<"\nPor favor, ingrese el nombre de la cuenta: ";
    string theName;
    getline(cin, theName);
    myAccount1.setName(theName);

    cout << "el nombre en el objeto my Account es: "
            <<myAccount1.getName() << endl;

    return 0;
}