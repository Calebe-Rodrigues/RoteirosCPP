#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>


class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();

        int getMatricula() { return matricula; }
        void setMatricula(int val) { matricula = val; }
        std::string getNome() { return nome; }
        void setNome(std::string val) { nome = val; }
        virtual double getSalario() { return salario; }
        void setSalario(double val) { salario = val; }

    protected:
        double salario;

    private:
        int matricula;
        std::string nome;
};

#endif // FUNCIONARIO_H
