#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <FiguraGeometrica.h>


class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo();
        virtual ~Triangulo();

        void setAltura(double h){altura = h;}
        void setLargura(double l){largura = l;}
        double getAltura(){return altura;}
        double getLargura(){return largura;}

        double areaTriangulo();

    protected:

    private:
        double altura;
        double largura;
};

#endif // TRIANGULO_H
