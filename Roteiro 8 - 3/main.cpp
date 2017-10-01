#include <iostream>
#include "SistemaGerenciaFolha.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"


using namespace std;

int main()
{
    SistemaGerenciaFolha umSistema = SistemaGerenciaFolha();

    Assalariado *umAssa = new Assalariado();
    Horista *umHora = new Horista();
    Comissionado *umComissa = new Comissionado();

    umAssa->Setsalario(1200);

    umHora->SetsalarioPorHora(35);
    umHora->SethorasTrabalhadas(48);

    umComissa->SetvendasSemanais(5000);
    umComissa->SetpercentualComissao(15);
    umComissa->SetsalarioBase(500);

    umSistema.Setfuncionarios(umAssa);
    umSistema.Setfuncionarios(umHora);
    umSistema.Setfuncionarios(umComissa);

    for (int i=0; i<3; i++){
        cout << umSistema.consultarSalarioFuncionario(i) << "\n\n";
    }
    cout << umSistema.calculaValorTotalFolha() << endl;

    return 0;
}
