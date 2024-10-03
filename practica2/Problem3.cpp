#include <iostream>
#include <vector>
using namespace std;

// Programa que eleva al cuadrado los elementos de un vector
int main() {
    vector<int> n = {2, 10, 5, 5, 6, 7};

    for (size_t i = 0; i < n.size(); ++i) {  // Cambiar <= a <
        n[i] = n[i] * n[i];  // Eleva al cuadrado
    } 
    for(int ns:n){
        cout<<ns<<" ";
    }

    return 0;
}
