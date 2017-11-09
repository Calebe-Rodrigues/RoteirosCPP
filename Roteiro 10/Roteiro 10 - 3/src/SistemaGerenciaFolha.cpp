#include "SistemaGerenciaFolha.h"
#include "FuncionarioNaoExisteException.h"

SistemaGerenciaFolha::SistemaGerenciaFolha()
{
    cont=0;
}

SistemaGerenciaFolha::~SistemaGerenciaFolha()
{
    //dtor
}

void SistemaGerenciaFolha::Setfuncionarios(Funcionario *umFunc){
    funcionarios[cont] = umFunc;
    cont++;
}

double SistemaGerenciaFolha::calculaValorTotalFolha(){
    double soma = 0;
    for (int i=0; i<cont; i++){
        soma += funcionarios[i]->calcularSalario();
    }
    return soma;
}

double SistemaGerenciaFolha::consultarSalarioFuncionario(int indice){
    if (indice > cont || indice < 0)
        throw FuncionarioNaoExisteException();

    return funcionarios[indice]->calcularSalario();
}
