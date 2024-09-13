#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() 
{
    Account myAccount1{"Juan Mendoza",10};
    Account myAccount2{"Pedro Diaz",20};

    cout<< "El nombre de la cuenta es : "<< myAccount1.getName()<<endl;
    cout<< "El nombre de la segunda cuenta es"<< myAccount2.getName()<<endl;

    cout<<"\n\naccount1: "<<myAccount1.getName()<< " saldo en soles"<< myAccount1.getBalance();
    cout<<"\n\naccount2: "<<myAccount2.getName()<< " saldo en soles"<< myAccount2.getBalance();


    cout<<"\n\nIngrese el monto para la account1 ";
    int depositAmount;
    cin>> depositAmount;
    cout<<"añadido "<< depositAmount << "el saldo de la ceunta1";
    myAccount1.deposit(depositAmount);

    cout<<"\n\naccount1: "<<myAccount1.getName()<< " saldo en soles"<< myAccount1.getBalance();
    cout<<"\n\naccount2: "<<myAccount2.getName()<< " saldo en soles"<< myAccount2.getBalance();

   
    cout<<"\n\nIngrese el monto para la account2 ";
    cin>>depositAmount;
    cout<<"añadido "<< depositAmount << " el saldo de la ceunta2";
    myAccount2.deposit(depositAmount);

    cout<<"\n\naccount1: "<<myAccount1.getName()<< " saldo en soles"<< myAccount1.getBalance();
    cout<<"\n\naccount2: "<<myAccount2.getName()<< " saldo en soles"<< myAccount2.getBalance();

    int retiAmount;
    cout<<"retiro";
    cin >> retiAmount;
    myAccount1.reti(retiAmount);

    cout<<"\n\naccount1: "<<myAccount1.getName()<< " saldo en soles"<< myAccount1.getBalance();
    cout<<"\n\naccount2: "<<myAccount2.getName()<< " saldo en soles"<< myAccount2.getBalance();


    cout << "\nPorfavor ingrese el nombre de la cuenta: ";
    string theName;
    getline(cin,theName);
    myAccount1.setName(theName);


    cout <<"\nEl nombre del objeto myAccount is: "<<
            myAccount1.getName()<<endl;



    
};

