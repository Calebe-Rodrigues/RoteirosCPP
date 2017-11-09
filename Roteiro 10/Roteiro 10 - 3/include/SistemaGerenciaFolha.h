#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"


class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha();
        virtual ~SistemaGerenciaFolha();

        void Setfuncionarios(Funcionario *umFunc);
        double calculaValorTotalFolha();
        double consultarSalarioFuncionario(int indice);


    protected:

    private:
        Funcionario *funcionarios[30];
        int cont;
};

#endif // SISTEMAGERENCIAFOLHA_H
