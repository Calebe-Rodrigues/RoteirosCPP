#ifndef TESTAVALIDANUMERO_H
#define TESTAVALIDANUMERO_H

#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"
#include <iostream>

class TestaValidaNumero
{
    public:
        TestaValidaNumero();
        virtual ~TestaValidaNumero();

        void validaNumero(int num);

    protected:

    private:
};

#endif // TESTAVALIDANUMERO_H
