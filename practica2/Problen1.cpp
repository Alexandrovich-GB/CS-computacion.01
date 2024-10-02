#include <iostream>
#include <string>
#include<array>

using namespace std;

//Has un programa que cuente cuatos numero primos hay en un arreglo

bool Primo(int num){
    if(num <= 2){
        return false;
    }
    for(int i=2; i*i <= num ; i+=1){
        if(num%i == 0){
            return false;
        }
    }        
    return true;

}

int NumPrimos(int arr[],int x){
    int contador=0;
    for(int i=0;i<= (x-1) ;i+=1){
        if(Primo(arr[i])){
            contador+=1;
        }
    }
    return contador;
}


int main(){
    int arr[] = {12,13,7,5,11,90,25,54,29,65};
    int x=10;
    cout<<NumPrimos(arr,x)<<endl;
}