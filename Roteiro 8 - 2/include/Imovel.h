#ifndef IMOVEL_H
#define IMOVEL_H

#include "Endereco.h"
#include <string>

class Imovel
{
    public:
        Imovel();
        virtual ~Imovel();

        Endereco Getendereco(){return esseEndereco;};

        virtual std::string Getdescricao()=0;

    protected:

    private:
        Endereco esseEndereco;
};

#endif // IMOVEL_H
