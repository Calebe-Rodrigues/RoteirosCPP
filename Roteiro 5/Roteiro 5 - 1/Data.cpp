#include "Data.h"
#include <iostream>

// dx ser� o ultimo dia de fevereiro, variando com os anos bissextos.

Data::Data(int d, int m, int a)
{
    int dx = 28;
    if (a%4 == 0){
        dx=29;
        if (a%100 == 0){
            dx=28;
            if (a%400 == 0){
                dx=29;
            }
        }
    }

    dia = d;
    mes = m;
    ano = a;

    if (d<0 || (d>31) || ((d>30) && ((m==4) || (m==6) || (m==9) || (m==11))) || ((d>dx) && (m==2))){
        dia = 0;
        std::cout << "Dia invalido" << std::endl;
    }
    if ((m > 12) || (m < 0)){
        mes = 0;
        std::cout << "Mes invalido" << std::endl;
    }
    if (a < 0){
        ano = 0;
        std::cout << "Ano invalido" << std::endl;
    }
}
Data::Data()
{
}

Data::~Data()
{
    //dtor
}


void Data::avancarDia(){
    int ultimoDia = 31;
    int dx = 28;
    if (ano%4 == 0){
        dx=29;
        if (ano%100 == 0){
            dx=28;
            if (ano%400 == 0){
                dx=29;
            }
        }
    }
    if (mes==2)
        ultimoDia = dx;
    if (mes==4 || mes==6 || mes==9 || mes==11)
        ultimoDia = 30;

    if (dia<ultimoDia)
        dia++;
    else{
        dia = 1;
        if (mes<12)
            mes++;
        else{
            mes = 1;
            ano++;
        }
    }
}

int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}
void Data::setDia(int d){
    int dx = 28;
    if (ano%4 == 0){
        dx=29;
        if (ano%100 == 0){
            dx=28;
            if (ano%400 == 0){
                dx=29;
            }
        }
    }

    dia = d;
    if (d<0 || (d>31) || ((d>30) && ((mes==4) || (mes==6) || (mes==9) || (mes==11))) || ((d>dx) && (mes==2))){
        dia = 0;
        std::cout << "Dia invalido" << std::endl;
    }
}
void Data::setMes(int m){
    int dx = 28;
    if (ano%4 == 0){
        dx=29;
        if (ano%100 == 0){
            dx=28;
            if (ano%400 == 0){
                dx=29;
            }
        }
    }

    if (((dia>30) && ((m==4) || (m==6) || (m==9) || (m==11))) || ((dia>dx) && (mes==2))){
        std::cout << "Mes incompativel com o dia atual" << std::endl;
    }

    else{mes = m;}

    if ((m > 12) || (m < 0)){
        mes = 0;
        std::cout << "Mes invalido" << std::endl;
    }
}
void Data::setAno(int a){
    ano = a;
    if (a < 0){
        ano = 0;
        std::cout << "Ano invalido" << std::endl;
    }
}
