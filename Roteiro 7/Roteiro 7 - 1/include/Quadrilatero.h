#ifndef QUADRILATERO_H
#define QUADRILATERO_H

#include <FiguraGeometrica.h>


class Quadrilatero : public FiguraGeometrica
{
    public:
        Quadrilatero();
        virtual ~Quadrilatero();

        void setAltura(double h){altura = h;}
        void setLargura(double l){largura = l;}
        double getAltura(){return altura;}
        double getLargura(){return largura;}

        double areaQuadrilatero();


    protected:

    private:
        double altura;
        double largura;
};

#endif // QUADRILATERO_H
