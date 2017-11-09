#ifndef QUADRADO_H
#define QUADRADO_H

#include <FiguraGeometrica.h>


class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado();
        virtual ~Quadrado();

        void setLado(double h){lado = h;}
        double getLado(){return lado;}

        double areaQuadrado();

    protected:

    private:
        double lado;
};

#endif // QUADRADO_H
