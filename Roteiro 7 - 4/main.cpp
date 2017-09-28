#include <iostream>
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main()
{
    TrabalhadorPorHora porHora1 = TrabalhadorPorHora();
    porHora1.setNome("Genaro o Profissional");
    porHora1.setSalario(32.35);

    cout << porHora1.getNome() << " ganha: " << porHora1.calcularPagamento(55) << ", semanalmente.\n";

    TrabalhadorAssalariado assalariado1 = TrabalhadorAssalariado();
    assalariado1.setNome("Juninho o Sobrinho Estagiario");
    assalariado1.setSalario(450);

    cout << assalariado1.getNome() << " ganha: " << assalariado1.calcularPagamento(70) << ", semanalmente\n\n";

    return 0;
}
