#include "Relogio.h"

Relogio::Relogio()
{
    //ctor
}

Relogio::~Relogio()
{
    //dtor
}

void Relogio::setHorario(int h, int m, int s){
    hora = h;
    minuto = m;
    segundo = s;
}

void Relogio::avancarHorario(){
    if (segundo < 59)
        segundo++;
    else{
        segundo = 0;
        if (minuto < 59)
            minuto++;
        else {
            minuto = 0;
            if (hora < 24)
                hora ++;
            else{
                hora = 1;
            }
        }
    }
}
