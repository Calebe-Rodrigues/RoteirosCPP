#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();

        std::string Getnome() { return nome; }
        void Setnome(std::string val) { nome = val; }
        int Getmatricula() { return matricula; }
        void Setmatricula(int val) { matricula = val; }

        virtual double calcularSalario()=0;

    protected:

    private:
        std::string nome;
        int matricula;
};

#endif // FUNCIONARIO_H
