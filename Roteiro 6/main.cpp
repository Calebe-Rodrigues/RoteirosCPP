#include <iostream>
#include "Relogio.h"
#include "Televisao.h"

using namespace std;

void TesteRelogio(){
    cout << "----- Testando classe: Relogio -----\n\n";
    Relogio relogio1 = Relogio();

    relogio1.setHorario(9,59, 69);

    cout << "Horario: " << relogio1.getHora() << "h:" << relogio1.getMinuto() << "m:" << relogio1.getSegundo() << "s\n";

    relogio1.avancarHorario();
    cout << "Horario: " << relogio1.getHora() << "h:" << relogio1.getMinuto() << "m:" << relogio1.getSegundo() << "s\n";
}
void TesteTelevisao(){
    cout << "----- Testando classe: Televisao -----\n\n";
    Televisao televisao1 = Televisao();

    televisao1.setCanal(0, 679);
    for (int i=0; i<25; i++){
        televisao1.setVolume(1);
        televisao1.setCanal(0,0);
    }
    cout << "Canal: " << televisao1.getCanal() << "\nVolume: " << televisao1.getVolume() << endl;

    for (int i=0; i<50; i++){
        televisao1.setVolume(0);
        while (i<37){
            televisao1.setCanal(0,0);
            i++;
        }
    }
    cout << "Canal: " << televisao1.getCanal() << "\nVolume: " << televisao1.getVolume() << endl;

}

int main(){
    TesteRelogio();
    TesteTelevisao();
}
