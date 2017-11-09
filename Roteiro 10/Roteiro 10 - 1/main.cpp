#include <iostream>
#include "TestaValidaNumero.h"

using namespace std;

int main()
{
    TestaValidaNumero teste = TestaValidaNumero();
    int i;

    cin >> i;

    try{
        teste.validaNumero(i);
    }catch(ValorAbaixoException ex){
        cout << ex.what() << endl;
    }catch(ValorAcimaException ex){
        cout << ex.what() << endl;
    }catch(ValorMuitoAcimaException ex){
        cout << ex.what() << endl;
    }

    return 0;
}
