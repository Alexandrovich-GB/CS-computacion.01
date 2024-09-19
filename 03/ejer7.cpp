#include <iostream>
using namespace std;

bool primo(int x ){
    int num=x;
    if(num <2){
        return false;
    }
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            return false;
        }

    }
    return true;
}

int main() {
    int contadorPrimos = 0;
    int numero = 1;
    int nPrimoDeseado = 10001;

    while (contadorPrimos < nPrimoDeseado) {    
        numero++;
        if (primo(numero)) {
            contadorPrimos++;
        }
    }

    cout << "El " << nPrimoDeseado << "º número primo es: " << numero << endl;

    return 0;
}