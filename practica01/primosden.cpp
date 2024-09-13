#include <iostream>
using namespace std;

//programa q solicite un numero entero N e imprima los numeros primos menores a n 

int main() {
    int numero;

    cout << "Ingresa un número: ";
    cin >> numero;


    cout << "Números primos menores que " << numero << ": ";
    
    for (int i = 2; i < numero; i++) {
        bool esPrimo = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}