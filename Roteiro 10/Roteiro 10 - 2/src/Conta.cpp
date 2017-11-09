#include "Conta.h"

Conta::Conta(std::string nome, double salarioMes, int numero, double umSaldo){
    nomeCliente = nome;
    salarioMensal = salarioMes;
    numeroConta = numero;
    saldo = umSaldo;

    definirLimite();
}

Conta::Conta()
{
    //ctor
}

Conta::~Conta()
{
    //dtor
}

void Conta::sacar(double valor){
    if (saldo + limite >= valor)
        saldo = saldo - valor;
    else
        throw SaldoNaoDisponivelException(saldo+limite, valor);
}
