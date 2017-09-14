#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>


class Pedido
{
    public:
        Pedido();
        virtual ~Pedido();

        int getNumero() { return numero; }
        void setNumero(int val) { numero = val; }
        std::string getDescricao() { return descricao; }
        void setDescricao(std::string val) { descricao = val; }
        int getQuantidade() { return quantidade; }
        void setQuantidade(int val) { quantidade = val; }
        double getPreco() { return preco; }
        void setPreco(double val) { preco = val; }

    protected:

    private:
        int numero;
        std::string descricao;
        int quantidade;
        double preco;
};

#endif // PEDIDO_H
