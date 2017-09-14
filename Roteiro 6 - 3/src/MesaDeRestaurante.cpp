#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{
    contador = 0;
    for (int i=0; i<50;i++){
        pedidos[i].setPreco(0);
    }
}

MesaDeRestaurante::~MesaDeRestaurante()
{
    //dtor
}

void MesaDeRestaurante::adicionaAoPedido(Pedido umPedido){
    pedidos[contador] = umPedido;
    contador++;
}
void MesaDeRestaurante::zeraPedidos(){
    contador = 0;
}
double MesaDeRestaurante::calculaTotal(){
    double soma = 0;

    for (int i=0;i<contador;i++){
        soma += pedidos[i].getPreco();
    }
    return soma;
}
