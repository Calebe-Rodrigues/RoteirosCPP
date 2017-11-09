#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

#include <exception>

class SaldoNaoDisponivelException : public std::exception
{
    public:
        SaldoNaoDisponivelException(double saldo, double valor);
        virtual ~SaldoNaoDisponivelException() throw();
        virtual const char* what() const throw();
    protected:
        double saldo, valor;
    private:
};

#endif // SALDONAODISPONIVELEXCEPTION_H
