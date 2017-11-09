#include "Consultor.h"

Consultor::Consultor()
{
    //ctor
}

Consultor::~Consultor()
{
    //dtor
}

double Consultor::getSalario(double percentagem){
    return salario * (1 + percentagem/100);
}
double Consultor::getSalario(){
    return salario * 1.1;
}

