#include "Otorrino.h"
#include <iostream>

Otorrino::Otorrino()
{
    especializacao = "Otorrinia(?)";
    //ctor
}

Otorrino::~Otorrino()
{
    //dtor
}

void Otorrino::ActionButton(){
    std::cout << "Otorrino otorrinando" << std::endl;
}
