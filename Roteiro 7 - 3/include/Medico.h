#ifndef MEDICO_H
#define MEDICO_H
#include <string>

class Medico
{
    public:
        Medico();
        virtual ~Medico();


        std::string getEspecializacao() { return especializacao; }

        void setNome (std::string umNome) {nome = umNome;};
        void setAltura (double val) {altura = val;};
        void setPeso (double val) {peso = val;};

        virtual void ActionButton() = 0;

    protected:
        std::string especializacao;
    private:
        std::string nome;
        double altura;
        double peso;
};

#endif // MEDICO_H
