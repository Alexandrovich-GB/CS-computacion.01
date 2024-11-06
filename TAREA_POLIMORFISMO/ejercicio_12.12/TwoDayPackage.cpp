#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "TwoDayPackage.h"

using namespace std;

TwoDayPackage::TwoDayPackage(const string& nombre,const string&  direccion, 
    const string&  ciudad,const string&  estado,const int& codigoremitente,const int& codigodestinatario,const int& peso,const int& precio)
        :Paquete(nombre,direccion,ciudad,estado,codigoremitente,codigodestinatario,peso,precio){};

double TwoDayPackage::CalcularCosto()const {
    cout<<"-----EL PRECIO ADICIONAL POR EL ENVIO DE DOS DIAS ES : "<<precioadicional<<"-----"<<endl;
    return getpeso()* (getprecio()+precioadicional);        
}