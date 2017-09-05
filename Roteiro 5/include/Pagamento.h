#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>


class Pagamento
{
    public:
        Pagamento();
        Pagamento(double pag, std::string nome);
        virtual ~Pagamento();

        double getValorPagamento() { return valorPagamento; }
        void setValorPagamento(double val) { valorPagamento = val; }
        std::string getNomeDoFuncionario() { return nomeDoFuncionario; }
        void setNomeDoFuncionario(std::string val) { nomeDoFuncionario = val; }

    protected:

    private:
        double valorPagamento;
        std::string nomeDoFuncionario;
};

#endif // PAGAMENTO_H
