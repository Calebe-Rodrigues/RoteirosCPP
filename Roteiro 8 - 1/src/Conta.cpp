#include "Conta.h"

Conta::Conta(std::string nome, double salarioMes, int numero, double umSaldo){
    nomeCliente = nome;
    salarioMensal = salarioMes;
    numeroConta = numero;
    saldo = umSaldo;
}

Conta::Conta()
{
    //ctor
}

Conta::~Conta()
{
    //dtor
}
