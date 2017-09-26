#include "Consultor.h"

Consultor::Consultor()
{
    percent = 10;
    //ctor
}

Consultor::~Consultor()
{
    //dtor
}

double Consultor::getSalario(){
    return salario * (1 + percent/100);
}
