#include<iostream>

using namespace std;

//programa muestra la suma de los multiplos de 3 o 5 de 1000000

int main() 
{
    int x{0};
    int suma{0};
    cout<<"ingrese un numero : ";
    cin>>x;
    for(int i=0;i<=x;i=i+1){
        if(i%3==0 || i%5==0){
            suma = suma + i;
        }
    }
    cout<<"la sumo de los numero divicibles por 5 o 3 es : "<<suma<<endl;

    




}