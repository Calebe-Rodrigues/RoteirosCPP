#include "Empregado.h"

Empregado::Empregado(std::string nom, std::string sobrenom, double salari){
    nome = nom;
    sobrenome = sobrenom;
    if (salari >=0) salario = salari;

}
Empregado::Empregado()
{
    nome = " ";
    sobrenome = " ";
    salario = 0;
}

Empregado::~Empregado()
{
    //dtor
}
