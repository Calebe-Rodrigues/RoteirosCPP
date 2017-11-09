#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <string>


class Trabalhador
{
    public:
        Trabalhador();
        virtual ~Trabalhador();

        void setNome(std::string umNome){nome = umNome;};
        void setSalario(double sal){salario = sal;};

        std::string getNome (){return nome;};
        double getSalario(){return salario;};

        virtual double calcularPagamento(int horas)=0;

    protected:

    private:
        std::string nome;
        double salario;
};

#endif // TRABALHADOR_H
