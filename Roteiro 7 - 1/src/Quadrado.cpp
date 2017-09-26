#include "Quadrado.h"

Quadrado::Quadrado()
{
    //ctor
}

Quadrado::~Quadrado()
{
    //dtor
}

double Quadrado::areaQuadrado(){
    return calcularArea(lado, lado);
}
