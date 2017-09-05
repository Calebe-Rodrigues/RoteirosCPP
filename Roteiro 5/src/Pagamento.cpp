#include "Pagamento.h"

Pagamento::Pagamento(double pag, std::string nome){
    valorPagamento = pag;
    nomeDoFuncionario = nome;
}

Pagamento::Pagamento()
{
    valorPagamento = 0;
    nomeDoFuncionario = " ";
}

Pagamento::~Pagamento()
{
    //dtor
}
