#include "TestaValidaNumero.h"

TestaValidaNumero::TestaValidaNumero()
{
    //ctor
}

TestaValidaNumero::~TestaValidaNumero()
{
    //dtor
}

void TestaValidaNumero::validaNumero(int num){
    if (num <= 0)
        throw ValorAbaixoException();
    if (num > 100 && num < 1000)
        throw ValorAcimaException();
    if (num >= 1000)
        throw ValorMuitoAcimaException();


    std::cout << "Numero valido\n";
}
