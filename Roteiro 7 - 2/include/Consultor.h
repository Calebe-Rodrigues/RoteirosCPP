#ifndef CONSULTOR_H
#define CONSULTOR_H

#include <Funcionario.h>


class Consultor : public Funcionario
{
    public:
        Consultor();
        virtual ~Consultor();

        double getSalario();
        void setPercent(double percentual) {percent = percentual;};
        double getPercent(){return percent;};

    protected:

    private:
        double percent;
};

#endif // CONSULTOR_H
