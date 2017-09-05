#include "ControleDeGastos.h"
#include "Despesa.h"

ControleDeGastos::ControleDeGastos()
{
    contador = 0;
    for (int i = 0; i<50; i++){
        despesas[i] = Despesa();
    }
}

ControleDeGastos::~ControleDeGastos()
{
    //dtor
}

Despesa ControleDeGastos::getDespesas(int indice){
    return despesas[indice];
}

void ControleDeGastos::setDespesas(Despesa desp){
    despesas[contador] = desp;
    contador ++;
}

double ControleDeGastos::calculaTotalDeDespesas(){
    int i = 0;
    double total = 0;

    while (despesas[i].Getvalor() != 0.0){
        total += despesas[i].Getvalor();
        i++;
    }
    return total;
}


    bool ControleDeGastos::existeDespesaDoTipo (std::string tipo){
        int i = 0;

        while (despesas[i].Getvalor() != 0.0){
            if (despesas[i].GettipoDeGasto() == tipo) return true;
            i++;
        }

        return false;
    }





