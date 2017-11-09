#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"
#include <string>


class Conta : public IConta
{
    public:
        Conta();
        Conta(std::string nome, double salarioMes, int numero, double umSaldo);
        virtual ~Conta();

        // Dispensei a implementação dos metodos setSaldo() e setLimite()
        // por conta da existencia dos metodos definirLimite(), sacar() e depositar().

        std::string GetnomeCliente() { return nomeCliente; }
        void SetnomeCliente(std::string val) { nomeCliente = val; }
        double GetsalarioMensal() { return salarioMensal; }
        void SetsalarioMensal(double val) { salarioMensal = val; }
        int GetnumeroConta() { return numeroConta; }
        void SetnumeroConta(int val) { numeroConta = val; }
        double Getsaldo() { return saldo; }
        double Getlimite() { return limite; }

        void definirLimite(){limite = 2*salarioMensal;};

        void sacar(double valor){saldo -= valor;};
        void depositar(double valor){saldo += valor;};

    protected:
        double limite;
        double saldo;

    private:
        std::string nomeCliente;
        double salarioMensal;
        int numeroConta;
};

#endif // CONTA_H
