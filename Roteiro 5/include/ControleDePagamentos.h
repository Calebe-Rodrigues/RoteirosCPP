#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"

class ControleDePagamentos
{
    public:
        ControleDePagamentos();
        virtual ~ControleDePagamentos();

        double CalculaTotalDePagamentos ();
        bool ExistePagamentoPara(std::string NomeDoFunc);
        void setPagamentos(Pagamento pag);
        Pagamento getPagamento (int indice);

    protected:

    private:
        Pagamento pagamentos[50];
        int contador;
};

#endif // CONTROLEDEPAGAMENTOS_H
