#include <iostream>
#include <string>

using namespace std;

//programa que imprima numeros impares del 1 hasta n 

int main(){
    int x{0};
    cout<<"ingrese un numero : ";
    cin>>x;
    cout<<"\n1";
    for(int i=2;i<=x;i=i+1){
        if(i%2!=0){
            cout<<","<<i;
        }
    }
}

