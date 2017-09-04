#include <iostream>
#include "Data.h"


using namespace std;

int main(void){
    Data data1 = Data(32,13,-2017);

    data1.setDia(28);
    data1.setMes(2);
    data1.setAno(2000);

    cout << data1.getDia() << "/" << data1.getMes() << "/" << data1.getAno() << endl;

    data1.avancarDia();

    cout << data1.getDia() << "/" << data1.getMes() << "/" << data1.getAno() << endl;


    return 0;
}
