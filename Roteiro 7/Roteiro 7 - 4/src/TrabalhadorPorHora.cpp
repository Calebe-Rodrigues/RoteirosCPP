#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora()
{
    //ctor
}

TrabalhadorPorHora::~TrabalhadorPorHora()
{
    //dtor
}

double TrabalhadorPorHora::calcularPagamento(int horas){
    double total;
    if (horas < 41) return getSalario()*horas;
    else{
        total = getSalario()*40;
        total += getSalario() * (double)(horas-40) * 1.5;
    }
    return total;
}
