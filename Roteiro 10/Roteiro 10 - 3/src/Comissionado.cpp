#include "Comissionado.h"

Comissionado::Comissionado()
{
    //ctor
}

Comissionado::~Comissionado()
{
    //dtor
}

// Assumindo que o percentual será escrito como 10, 25, 100 e etc
double Comissionado::calcularSalario(){
    return salarioBase+(vendasSemanais*(percentualComissao/100));
}
