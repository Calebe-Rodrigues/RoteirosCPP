#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>


class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        virtual ~FiguraGeometrica();

        std::string getNome() { return nome; }
        void setNome(std::string val) { nome = val; }
        double calcularArea(double h, double l);

    protected:

    private:
        std::string nome;
};

#endif // FIGURAGEOMETRICA_H
