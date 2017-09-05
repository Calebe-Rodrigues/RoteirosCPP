#include "Invoice.h"
#include <string>

Invoice::Invoice(std::string descr, int num, int quant, double prec)
{
    descricao = descr;
    numero = num;
    quantidade = quant;
    preco = prec;

    if (quant < 0) quantidade = 0;
    if (prec < 0) preco = 0;
}
Invoice::Invoice()
{
    descricao = " ";
    numero = 0;
    quantidade = 0;
    preco = 0;
}

Invoice::~Invoice()
{
    //dtor
}

void Invoice::setDescricao(std::string descr){
    descricao = descr;
}
void Invoice::setNumero(int num){
    numero = num;
}
void Invoice::setQuantidade(int quant){
    quantidade = quant;
    if (quant < 0) quantidade = 0;
}
void Invoice::setPreco(double prec){
    preco = prec;
    if (prec < 0) preco = 0;
}
std::string Invoice::getDescricao (){
    return descricao;
}
int Invoice::getNumero(){
    return numero;
}
int Invoice::getQuantidade(){
    return quantidade;
}
double Invoice::getPreco(){
    return preco;
}

double Invoice::getInvoiceAmount(){
    return preco*quantidade;
}
