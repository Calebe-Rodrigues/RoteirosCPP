#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include <Conta.h>


class ContaEspecial : public Conta
{
    public:
        ContaEspecial();
        ContaEspecial(std::string nome, double salarioMes, int numero, double umSaldo);
        virtual ~ContaEspecial();

        void definirLimite();

    protected:

    private:
};

#endif // CONTAESPECIAL_H
