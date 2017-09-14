#include "Televisao.h"

Televisao::Televisao()
{
    volume = 0;
    canal = 0;
}

Televisao::~Televisao()
{
    //dtor
}

void Televisao::setVolume(int upDown){
    if (upDown == 1) volume++;
    if (upDown == 0) volume--;
}
void Televisao::setCanal(int upDown, int nCanal){
    if (upDown == 1) canal++;
    if (upDown == 0) canal--;
    if (nCanal != 0) canal = nCanal;
}
