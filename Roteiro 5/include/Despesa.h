#ifndef DESPESA_H
#define DESPESA_H
#include <string>

class Despesa
{
    public:
        Despesa();
        Despesa(double gasto, std::string tipo);
        virtual ~Despesa();

        double Getvalor() { return valor; }
        std::string GettipoDeGasto() { return tipoDeGasto; }

        void Setvalor(double val) { valor = val; }
        void SettipoDeGasto(std::string val) { tipoDeGasto = val; }

    protected:

    private:
        double valor;
        std::string tipoDeGasto;
};

#endif // DESPESA_H
