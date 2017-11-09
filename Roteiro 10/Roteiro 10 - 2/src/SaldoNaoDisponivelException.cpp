#include "SaldoNaoDisponivelException.h"
#include <stdio.h>

SaldoNaoDisponivelException::SaldoNaoDisponivelException(double saldo, double valor)
{
    this->saldo = saldo;
    this->valor = valor;
}

SaldoNaoDisponivelException::~SaldoNaoDisponivelException() throw()
{
    //dtor
}

const char* SaldoNaoDisponivelException::what() const throw() {
    char * texto = new char[50];
    sprintf(texto, "saldo=%.2lf , valor=%.2lf", saldo, valor);
    return (const char *)texto;
}
