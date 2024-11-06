#ifndef DATE_H
#define DATE_H

#include<iostream>
#include<string>

using namespace std;

class Date{
public:
    Date(int dia,int mes ,int año){
        this->año=año;
        if(mes<12 && mes>0){
            this->mes=mes;
        }
        else{
            cout<<"*******EL MES INGRERSADO ES FALSO*******";
        };
        if(dia<32 && dia>0){
            this->dia=dia;
        }
        else{
            cout<<"*******EL DIA INGRERSADO ES FALSO*******";
        }
    }
    int getmes() const {
        return mes;
    }


protected:
    int dia;
    int mes;
    int año;
};

#endif