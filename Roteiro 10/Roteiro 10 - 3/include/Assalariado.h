#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include <Funcionario.h>


class Assalariado : public Funcionario
{
    public:
        Assalariado();
        virtual ~Assalariado();

        double Getsalario() { return salario; }
        void Setsalario(double val) { salario = val; }

        double calcularSalario();

    protected:

    private:
        double salario;
};

#endif // ASSALARIADO_H
