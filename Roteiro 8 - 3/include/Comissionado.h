#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include <Funcionario.h>


class Comissionado : public Funcionario
{
    public:
        Comissionado();
        virtual ~Comissionado();

        double GetvendasSemanais() { return vendasSemanais; }
        void SetvendasSemanais(double val) { vendasSemanais = val; }
        double GetpercentualComissao() { return percentualComissao; }
        void SetpercentualComissao(double val) { percentualComissao = val; }
        double GetsalarioBase(){return salarioBase;};
        void SetsalarioBase(double val){salarioBase=val;};

        double calcularSalario();

    protected:

    private:
        double vendasSemanais;
        double percentualComissao;
        double salarioBase;
};

#endif // COMISSIONADO_H
