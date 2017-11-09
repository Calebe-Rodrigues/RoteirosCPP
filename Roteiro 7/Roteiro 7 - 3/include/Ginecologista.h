#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H

#include <Medico.h>


class Ginecologista : public Medico
{
    public:
        Ginecologista();
        virtual ~Ginecologista();

        void ActionButton();

    protected:

    private:
};

#endif // GINECOLOGISTA_H
