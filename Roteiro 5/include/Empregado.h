#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>


class Empregado
{
    public:
        Empregado();
        Empregado(std::string nom, std::string sobrenom, double salari);
        virtual ~Empregado();

        std::string Getnome() { return nome; }
        std::string Getsobrenome() { return sobrenome; }
        double Getsalario() { return salario; }

        void Setnome(std::string val) { nome = val; }
        void Setsobrenome(std::string val) { sobrenome = val; }
        void Setsalario(double val) { salario = val; }

    protected:

    private:
        std::string nome;
        std::string sobrenome;
        double salario;
};

#endif // EMPREGADO_H
