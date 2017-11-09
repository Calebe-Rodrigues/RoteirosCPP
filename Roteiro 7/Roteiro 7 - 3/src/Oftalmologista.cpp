#include "Oftalmologista.h"
#include <iostream>

Oftalmologista::Oftalmologista()
{
    especializacao = "Oftalmologia";
    //ctor
}

Oftalmologista::~Oftalmologista()
{
    //dtor
}

void Oftalmologista::ActionButton(){
    std::cout << "Oftalmologista oftalmologando" << std::endl;
}
