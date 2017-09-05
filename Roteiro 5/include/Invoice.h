#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice
{
    public:
        Invoice(std::string descr, int num, int quant, double prec);
        Invoice();
        virtual ~Invoice();

        double getInvoiceAmount();

        void setDescricao(std::string descr);
        void setNumero(int num);
        void setQuantidade(int quant);
        void setPreco(double prec);

        std::string getDescricao ();
        int getNumero();
        int getQuantidade();
        double getPreco();

    protected:

    private:
        std::string descricao;
        int numero, quantidade;
        double preco;
};

#endif // INVOICE_H
