#include "Endereco.h"

Endereco::Endereco()
{
    //ctor
}

Endereco::~Endereco()
{
    //dtor
}

string Endereco::getLogradouro(){
    return "Got Logradouro";
}
string Endereco::getBairro(){
    return "Got Bairro";
}
int Endereco::getNumero(){
    return 1;
}
string Endereco::getCidade(){
    return "Got Cidade";
}
string Endereco::getCep(){
    return "Got CEP";
}
