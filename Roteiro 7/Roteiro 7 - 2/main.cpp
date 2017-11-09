#include <iostream>
#include "Consultor.h"

using namespace std;

int main()
{
    Funcionario *funcionario1 = new Funcionario();
    funcionario1->setSalario(10);
    funcionario1->setMatricula(123);
    funcionario1->setNome("Juninho Meu Sobrinho");
    cout << funcionario1->getNome() << endl << funcionario1->getMatricula() << endl << funcionario1->getSalario() << endl;

    Consultor consultor1 = Consultor();
    consultor1.setSalario(30);
    consultor1.setMatricula(321);
    consultor1.setNome("Genaro o Profissional");


    cout << consultor1.getNome() << endl << consultor1.getMatricula() << endl << consultor1.getSalario(50) << endl;


    return 0;
}
