#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

#include <Trabalhador.h>


class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado();
        virtual ~TrabalhadorAssalariado();

        double calcularPagamento(int horas);

    protected:

    private:
};

#endif // TRABALHADORASSALARIADO_H
