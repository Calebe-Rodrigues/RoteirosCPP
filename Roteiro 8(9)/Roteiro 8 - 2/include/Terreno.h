#ifndef TERRENO_H
#define TERRENO_H

#include <Imovel.h>


class Terreno : public Imovel
{
    public:
        Terreno();
        virtual ~Terreno();

        double Getarea() { return area; }
        void Setarea(double val) { area = val; }

        std::string Getdescricao();

    protected:

    private:
        double area;
};

#endif // TERRENO_H
