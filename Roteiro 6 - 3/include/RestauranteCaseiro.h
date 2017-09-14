#ifndef RETAURANTECASEIRO_H
#define RETAURANTECASEIRO_H
#include "MesaDeRestaurante.h"


class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        virtual ~RestauranteCaseiro();

        void adicionaAoPedido (int mesa, Pedido umPedido);
        double calculaTotalRestaurante();

    protected:

    private:
        MesaDeRestaurante mesas[12];
};

#endif // RETAURANTECASEIRO_H
