#include <iostream>
using namespace std;

void mayorFactorPrimo(long long n) {
    long long mayor = 0;


    while (n % 2 == 0) {
        mayor = 2;
        n /= 2;
    }

    for (long long i = 3; i<= n/2; i += 2) {
        while (n % i == 0) {
            mayor = i;
            n /= i;
        }
    }


    if (n > 2) {
        mayor = n;
    }

    cout << "El mayor factor primo es: " << mayor << endl;
}

int main() {
    mayorFactorPrimo(600851475143);
    return 0;
}


