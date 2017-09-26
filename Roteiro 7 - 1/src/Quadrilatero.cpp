#include "Quadrilatero.h"

Quadrilatero::Quadrilatero()
{
    //ctor
}

Quadrilatero::~Quadrilatero()
{
    //dtor
}

double Quadrilatero::areaQuadrilatero(){
    return calcularArea(altura, largura);
}
