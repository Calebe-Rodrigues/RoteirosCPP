#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"


class ControleDeGastos
{
    public:
        ControleDeGastos();
        virtual ~ControleDeGastos();

        double calculaTotalDeDespesas();

        void setDespesas (Despesa desp);
        Despesa getDespesas (int indice);

        bool existeDespesaDoTipo (std::string tipo);

    protected:

    private:
        Despesa despesas[50];
        int contador;
};

#endif // CONTROLEDEGASTOS_H
