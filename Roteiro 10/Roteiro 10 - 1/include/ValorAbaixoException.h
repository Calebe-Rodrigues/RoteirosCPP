#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H

#include <exception>
#include <string>

class ValorAbaixoException : public std::exception
{
    public:
        ValorAbaixoException();
        virtual ~ValorAbaixoException() throw();

        std::string what()
        {
            return "Valor menor ou igual a 0(zero)";
        }

    protected:

    private:
};

#endif // VALORABAIXOEXCEPTION_H
