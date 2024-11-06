#ifndef PAQUETE_H
#define PAQUETE_H

#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <sstream>

using namespace std;

class Paquete{
protected:
    string nombre;
    string direccion;
    string ciudad;
    string estado;
    int CodigoPostalRemitente;
    int CodigoPostalDestinatario;
    double peso;
    double costo;
public:
    Paquete(string nombre,string direccion, string ciudad, string estado, int codigoremitente, int codigodestinatario,int peso,int precio){
        this->nombre=nombre;
        this->direccion=direccion;
        this->ciudad=ciudad;
        this->estado=estado;
        this->CodigoPostalDestinatario=codigodestinatario;
        this->CodigoPostalRemitente=codigoremitente;
        setpeso(peso);
        setprecio(precio);
    }

    virtual double CalcularCosto()const = 0;

    void setpeso(int peso){
        if(peso<0.0){
            throw invalid_argument("EL PESO ES INVALIDO");
        }
        this->peso=peso;
    }
    void setprecio(int precio){
        if(precio<0.0){
            throw invalid_argument("EL PRECIO ES INVALIDO");
        }
        this->costo=precio;
    }
    double getpeso()const {
        return peso;
    }
    double getprecio()const {
        return costo;
    }
    virtual void imprimir()const {
        cout<<"SU NOMBRE ES : "<<nombre
        <<"\nLA DIRECCION DEL PARQUETE ES : "<<direccion
        <<"\nESTA DESTINADO PARA LA CIUDAD : "<<ciudad
        <<"\nEN EL ESTADO DE : "<<estado
        <<"\nEL CODIGO POSTAL DEL DESTINATARIO ES : "<<CodigoPostalDestinatario
        <<"\nEL CODIGO POSTAL DEL REMITENTE ES : "<<CodigoPostalRemitente
        <<"\nEL PESO DEL PEDIDO ES : "<<peso
        <<"\nEL PRECIO DEL PRODUCTO ES : "<<costo<<endl;
    }
};

#endif