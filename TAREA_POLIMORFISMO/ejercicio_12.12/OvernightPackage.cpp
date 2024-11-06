#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "OvernightPackage.h"

using namespace std;

OvernightPackage::OvernightPackage(const string& nombre,const string&  direccion, 
    const string&  ciudad,const string&  estado,const int& codigoremitente,const int& codigodestinatario,const int& peso,const int& precio)
        :Paquete(nombre,direccion,ciudad,estado,codigoremitente,codigodestinatario,peso,precio){};
double OvernightPackage::CalcularCosto()const {
    cout<<"-----EL PRECIO ADICIONAL POR EL ENVIO POR LA NOCHE ES : "<<precioadicional<<"-----"<<endl;
    return getpeso()* (getprecio()+precioadicional);        
}