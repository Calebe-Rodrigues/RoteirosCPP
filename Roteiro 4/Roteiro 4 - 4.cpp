#include <iostream>
#include <cstdlib>


using namespace std;

double Pjogador (int tVotos, int jVotos){
    return (jVotos*100)/(double)(tVotos);
}


int main(void){
    int nVotos = 0, voto = 1, jogadores[23] = {0};
    int i, melhor, maior = 0;


    cout << "Qneute: Quem foi o melhor jogador?\n\n";

    while (1){
        cout << "Numero do jogador (0=fim) : ";
        cin >> voto;
        if (voto == 0) break;
        if (voto > 23 || voto < 0)
            cout << "Numero invalido:\n";
        else jogadores[voto]++;
        nVotos ++;
    }
    cout << "\n Resultado da votacao:\n";
    cout << "Foram computados " << nVotos << " votos.\n";
    cout << "Jogador    Votos    %%";

    for (i=0; i<23; i++){
        if (jogadores[i] > maior){
            melhor = i;
            maior = jogadores[i];
        }

        if (i<10){
            if (jogadores[i] > 0){
                cout << "\n"<< i << "          " << jogadores[i] << "        " << Pjogador(nVotos, jogadores[i]) << "%%";
            }
        }else
            if (jogadores[i] > 0){
                cout << "\n"<< i << "         " << jogadores[i] << "        " << Pjogador(nVotos, jogadores[i]) << "%%";
            }
    }

    cout << "\nO melhor jogador foi o número "<< melhor << ", com " << maior  << "votos, correspondendo a " << Pjogador(nVotos, maior) << "%% do total de votos.";

    return 0;
}
