#include "Despesa.h"

Despesa::Despesa(double gasto, std::string tipo){
    valor = gasto;
    tipoDeGasto = tipo;
}
Despesa::Despesa()
{
    valor = 0;
    tipoDeGasto = " ";
}

Despesa::~Despesa()
{
    //dtor
}
