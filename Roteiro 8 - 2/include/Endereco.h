#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class Endereco
{
    public:
        Endereco();
        virtual ~Endereco();

        string getLogradouro();
        string getBairro();
        int getNumero();
        string getCidade();
        string getCep();

    protected:

    private:
};

#endif // ENDERECO_H
