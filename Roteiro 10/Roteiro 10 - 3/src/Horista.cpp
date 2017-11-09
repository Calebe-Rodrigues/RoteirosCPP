#include "Horista.h"

Horista::Horista()
{
    //ctor
}

Horista::~Horista()
{
    //dtor
}

double Horista::calcularSalario(){
    if (horasTrabalhadas<41)
        return salarioPorHora*horasTrabalhadas;
    else{
        return (salarioPorHora*40) + (salarioPorHora * (horasTrabalhadas-40)*1.5);
    }

}
