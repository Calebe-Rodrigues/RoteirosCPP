#ifndef CIRCULO_H
#define CIRCULO_H

#include <FiguraGeometrica.h>


class Circulo : public FiguraGeometrica
{
    public:
        Circulo();
        virtual ~Circulo();

        double getRaio() { return raio; }
        void setRaio(double val) { raio = val; }

        double areaCirculo();

    protected:

    private:
        double raio;
};

#endif // CIRCULO_H
