#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
    for (int i=0; i<12; i++){
        mesas[i] = MesaDeRestaurante();
    }
}

RestauranteCaseiro::~RestauranteCaseiro()
{
    //dtor
}

void RestauranteCaseiro::adicionaAoPedido(int mesa, Pedido umPedido){
    mesas[mesa].adicionaAoPedido(umPedido);
}
double RestauranteCaseiro::calculaTotalRestaurante(){
    double soma=0;
    for(int i=0; i<12; i++){
        soma += mesas[i].calculaTotal();
    }
    return soma;
}
