#include <iostream>
using namespace std;

bool esPalindromo(int numero) {
    int numeroOriginal = numero;
    int numeroInvertido = 0;
    
    while (numero > 0) {
        numeroInvertido = numeroInvertido * 10 + numero % 10;
        numero /= 10;
    }
    
    return numeroOriginal == numeroInvertido;
}

int main() {
    int palindromoMaximo = 0;
    int num1=0;
    int num2=0;

    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            int producto = i * j;
            
            if (esPalindromo(producto) && producto > palindromoMaximo) {
                palindromoMaximo = producto;
                num1 = i;
                num2 = j;
            }
        }
    }
    cout << "El palíndromo más grande es: " << palindromoMaximo << " = " << num1 << " x " << num2 << endl;

    return 0;
}
