#include "ControleDePagamentos.h"

ControleDePagamentos::ControleDePagamentos()
{
    for(int i; i<50; i++){
        pagamentos[i] = Pagamento();
    }
    contador = 0;
}

ControleDePagamentos::~ControleDePagamentos()
{
    //dtor
}

double ControleDePagamentos::CalculaTotalDePagamentos(){
    double total =0;
    int i = 0;
    while (pagamentos[i].getValorPagamento() != 0){
        total += pagamentos[i].getValorPagamento();
        i++;
    }
    return total;
}

bool ControleDePagamentos::ExistePagamentoPara(std::string nomeDoFunc){
    int i = 0;
    while (pagamentos[i].getValorPagamento() != 0){
        if (nomeDoFunc == pagamentos[i].getNomeDoFuncionario()){
            return true;
        }
        i++;
    }
    return false;
}

void ControleDePagamentos::setPagamentos(Pagamento pag){
    pagamentos[contador] = pag;
    contador ++;
}

Pagamento ControleDePagamentos::getPagamento(int indice){
    return pagamentos[indice];
}
