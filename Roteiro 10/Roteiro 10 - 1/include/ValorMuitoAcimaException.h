#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H

#include <exception>
#include <string>

class ValorMuitoAcimaException : public std::exception
{
    public:
        ValorMuitoAcimaException();
        virtual ~ValorMuitoAcimaException() throw();

        std::string what()
        {
            return "Valor maior ou igual a 1000";
        }

    protected:

    private:
};

#endif // VALORMUITOACIMAEXCEPTION_H
