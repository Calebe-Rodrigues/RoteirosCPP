#include <iostream>
#include "Imovel.h"
#include "Terreno.h"
#include "Casa.h"
#include "Apartamento.h"

using namespace std;

int main()
{
    Imovel *imoveis[3];

    imoveis[0] = new Terreno();
    imoveis[1] = new Casa();
    imoveis[2] = new Apartamento();

    for (int i=0; i<3; i++){
        cout << imoveis[i]->Getdescricao() << endl;
    }

    return 0;
}
