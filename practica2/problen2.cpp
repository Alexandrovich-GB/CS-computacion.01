#include <iostream>
#include <string>
#include<array>
#include<cstring>

using namespace std;

//programa que verifica cuantos letras hay en una cadena

int main(){
    int contador=0;
    char cadena[] = "H1o3l1a32C21om32o";
    for(int i=0;i<=strlen(cadena);i++){
        if(isalpha(cadena[i])){
            cout<<cadena[i]<<'\n';
            contador+=1;
        }
    }
    cout<<contador<<endl;
}