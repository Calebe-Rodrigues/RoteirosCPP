#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"


class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        virtual ~MesaDeRestaurante();

        void adicionaAoPedido(Pedido umPedido);
        void zeraPedidos();
        double calculaTotal();
    protected:

    private:
        Pedido pedidos[50];
        int contador;
};

#endif // MESADERESTAURANTE_H
