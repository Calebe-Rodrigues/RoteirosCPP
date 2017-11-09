#include <iostream>

#include "ContaEspecial.h"

using namespace std;

int main()
{
    Conta conta1 = Conta("Um Cliente", 2780, 1, 2017);

    try{
        conta1.sacar(2017);
        conta1.sacar(6000);

    }catch(SaldoNaoDisponivelException ex){
        cout << "Saldo nao disponivel " << ex.what() << endl;
    }

    return 0;
}
