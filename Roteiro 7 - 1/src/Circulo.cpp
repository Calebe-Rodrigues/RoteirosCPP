#include "Circulo.h"

Circulo::Circulo()
{
    //ctor
}

Circulo::~Circulo()
{
    //dtor
}

double Circulo::areaCirculo(){
    return calcularArea(3.14, raio*raio);
}
