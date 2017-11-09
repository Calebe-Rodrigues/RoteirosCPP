#ifndef HORISTA_H
#define HORISTA_H

#include <Funcionario.h>


class Horista : public Funcionario
{
    public:
        Horista();
        virtual ~Horista();

        double GetsalarioPorHora() { return salarioPorHora; }
        void SetsalarioPorHora(double val) { salarioPorHora = val; }
        double GethorasTrabalhadas() { return horasTrabalhadas; }
        void SethorasTrabalhadas(double val) { horasTrabalhadas = val; }

        double calcularSalario();

    protected:

    private:
        double salarioPorHora;
        double horasTrabalhadas;
};

#endif // HORISTA_H
