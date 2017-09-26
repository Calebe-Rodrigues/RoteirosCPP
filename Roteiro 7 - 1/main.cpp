#include <iostream>
#include "Quadrado.h"
#include "Quadrilatero.h"
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;

int main(){
    Quadrado quadrado1 = Quadrado();
    quadrado1.setNome("Um Quadrado");
    quadrado1.setLado(15);
    cout << quadrado1.areaQuadrado() << endl;

    Quadrilatero quadrilatero1 = Quadrilatero();
    quadrilatero1.setNome("Um Quadrilatero");
    quadrilatero1.setAltura(15);
    quadrilatero1.setLargura(12);
    cout << quadrilatero1.areaQuadrilatero() << endl;

    Triangulo triangulo1 = Triangulo();
    triangulo1.setNome("Um Triangulo");
    triangulo1.setAltura(14);
    triangulo1.setLargura(18);
    cout << triangulo1.areaTriangulo() << endl;

    Circulo circulo1 = Circulo();
    circulo1.setNome("Um Circulo");
    circulo1.setRaio(9);
    cout << circulo1.areaCirculo() << endl;


    return 0;
}
