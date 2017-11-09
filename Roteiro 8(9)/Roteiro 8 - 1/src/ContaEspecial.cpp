#include "ContaEspecial.h"


ContaEspecial::ContaEspecial(std::string nome, double salarioMes, int numero, double umSaldo){
    SetnomeCliente(nome);
    SetsalarioMensal(salarioMes);
    SetnumeroConta(numero);
    saldo = umSaldo;
}


ContaEspecial::ContaEspecial()
{
    //ctor
}

ContaEspecial::~ContaEspecial()
{
    //dtor
}

void ContaEspecial::definirLimite(){
    limite = 3*GetsalarioMensal();
}
