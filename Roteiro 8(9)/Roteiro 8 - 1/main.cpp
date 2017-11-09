#include <iostream>

#include "ContaEspecial.h"

using namespace std;

int main()
{
    Conta conta1 = Conta("Um Cliente", 2780, 1, 2017);
    ContaEspecial contaEspecial1 = ContaEspecial("Genaro o Profissional", 10780, 99, 20017);


    conta1.definirLimite();
    contaEspecial1.definirLimite();

    cout << conta1.GetnomeCliente() << ":\nNumero da conta: " << conta1.GetnumeroConta() << "\nLimite: " << conta1.Getlimite() << "\n\n";
    cout << contaEspecial1.GetnomeCliente() << ":\nNumero da conta: " << contaEspecial1.GetnumeroConta() << ":\nLimite: " << contaEspecial1.Getlimite() << "\n\n";


    conta1.sacar(2000);
    cout << "Conta de numero " <<conta1.GetnumeroConta() << " sacando 2000\nSaldo Restante: " << conta1.Getsaldo() << "\n\n";
    conta1.depositar(3017);
    cout << "Conta de numero " << conta1.GetnumeroConta() << " depositando 3017\nSaldo Restante: " << conta1.Getsaldo() <<"\n\n";


    contaEspecial1.sacar(2034);
    cout << "Conta de numero " <<contaEspecial1.GetnumeroConta() << " sacando 2034\nSaldo Restante: " << contaEspecial1.Getsaldo() << "\n\n";
    contaEspecial1.depositar(3987);
    cout << "Conta de numero " << contaEspecial1.GetnumeroConta() << " depositando 3987\nSaldo Restante: " << contaEspecial1.Getsaldo() <<"\n\n";






    return 0;
}
