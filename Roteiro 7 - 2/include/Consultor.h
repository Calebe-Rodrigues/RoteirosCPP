#ifndef CONSULTOR_H
#define CONSULTOR_H

#include <Funcionario.h>


class Consultor : public Funcionario
{
    public:
        Consultor();
        virtual ~Consultor();

        double getSalario();
        double getSalario(double percentagem);

    protected:

    private:
};

#endif // CONSULTOR_H
