#include "Ginecologista.h"
#include <iostream>

Ginecologista::Ginecologista()
{
    especializacao = "Ginecologia";
    //ctor
}

Ginecologista::~Ginecologista()
{
    //dtor
}

void Ginecologista::ActionButton(){
    std::cout << "Ginecologista ginecando" << std::endl;
}
