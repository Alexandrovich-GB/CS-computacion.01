#include<iostream>
#include<string>
#include<vector>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

int main(){
    int calcular_costo=0;

    TwoDayPackage Paquete1{          
        "Ivan Gonzales","Urb la perla","Arequipa","Cerro colorado",04001,1234,14,15
    };
    OvernightPackage Paquete2{
        "Maximo Gonzales","Urb la perlita","Bolivia","La Paz",4321,4000,3,15
    };
    vector<Paquete *> paquetes{&Paquete1,&Paquete2};

    for(const Paquete* ptr:paquetes){
        ptr->imprimir();   
        cout<<"EL ENVIO VA A COSTAR: "<<ptr->CalcularCosto()<<endl;
        calcular_costo+=ptr->CalcularCosto();
    }
    cout<<"EL PRECIO DE SUS PEDIDOS TOTALES ES : "<<calcular_costo<<endl;

}

