#ifndef CASA_H
#define CASA_H

#include <Imovel.h>


class Casa : public Imovel
{
    public:
        Casa();
        virtual ~Casa();

        int GetnumeroDePavimentos() { return numeroDePavimentos; }
        void SetnumeroDePavimentos(int val) { numeroDePavimentos = val; }
        int GetquantidadeDeQuartos() { return quantidadeDeQuartos; }
        void SetquantidadeDeQuartos(int val) { quantidadeDeQuartos = val; }
        double GetareaDoTerreno() { return areaDoTerreno; }
        void SetareaDoTerreno(double val) { areaDoTerreno = val; }
        double GetareaConstruida() { return areaConstruida; }
        void SetareaConstruida(double val) { areaConstruida = val; }

        std::string Getdescricao();

    protected:

    private:
        int numeroDePavimentos;
        int quantidadeDeQuartos;
        double areaDoTerreno;
        double areaConstruida;
};

#endif // CASA_H
