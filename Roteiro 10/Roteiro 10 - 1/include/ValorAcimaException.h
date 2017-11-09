#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H

#include "exception"
#include <string>

class ValorAcimaException : public std::exception
{
    public:
        ValorAcimaException();
        virtual ~ValorAcimaException() throw();

        std::string what()
        {
            return "Valor maior que 100 e menor que 1000";
        }

    protected:

    private:
};

#endif // VALORACIMAEXCEPTION_H
