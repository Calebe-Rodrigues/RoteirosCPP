#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include <Trabalhador.h>


class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora();
        virtual ~TrabalhadorPorHora();

        double calcularPagamento(int horas);

    protected:

    private:
};

#endif // TRABALHADORPORHORA_H
