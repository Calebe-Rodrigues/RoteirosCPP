#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H

#include "exception"

class OrcamentoEstouradoException : public std::exception
{
    public:
        OrcamentoEstouradoException();
        virtual ~OrcamentoEstouradoException() throw();

    protected:

    private:
};

#endif // ORCAMENTOESTOURADOEXCEPTION_H
