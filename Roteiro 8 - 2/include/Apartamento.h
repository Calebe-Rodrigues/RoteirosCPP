#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include <Imovel.h>


class Apartamento : public Imovel
{
    public:
        Apartamento();
        virtual ~Apartamento();

        std::string Getposicao() { return posicao; }
        void Setposicao(std::string val) { posicao = val; }
        double GetvalorDoCondominio() { return valorDoCondominio; }
        void SetvalorDoCondominio(double val) { valorDoCondominio = val; }
        int GetnumeroDeVagasNaGaragem() { return numeroDeVagasNaGaragem; }
        void SetnumeroDeVagasNaGaragem(int val) { numeroDeVagasNaGaragem = val; }

        std::string Getdescricao();

    protected:

    private:
        std::string posicao;
        double valorDoCondominio;
        int numeroDeVagasNaGaragem;
};

#endif // APARTAMENTO_H
