#include "Cirurgiao.h"
#include <iostream>

Cirurgiao::Cirurgiao()
{
    especializacao = "Cirurgia";
    //ctor
}

Cirurgiao::~Cirurgiao()
{
    //dtor
}

void Cirurgiao::ActionButton(){
    std::cout << "Cirurgiao cirurgiando" << std::endl;
}
