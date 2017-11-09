#include <iostream>
#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Otorrino.h"
#include "Ginecologista.h"

using namespace std;

int main()
{
    Medico *medicos[4];
    medicos[0] = new Cirurgiao();
    medicos[1] = new Oftalmologista();
    medicos[2] = new Otorrino();
    medicos[3] = new Ginecologista();

    for (int i=0; i<4; i++){
        cout << medicos[i]->getEspecializacao() << endl;
        medicos[i]->ActionButton();
    }



    return 0;
}
