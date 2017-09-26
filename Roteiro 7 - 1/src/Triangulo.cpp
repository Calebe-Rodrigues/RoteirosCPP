#include "Triangulo.h"

Triangulo::Triangulo()
{
    //ctor
}

Triangulo::~Triangulo()
{
    //dtor
}

double Triangulo::areaTriangulo(){
    return calcularArea(altura, largura)/2;
}
