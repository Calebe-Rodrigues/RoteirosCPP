#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(){
    int n, m = 0;

    srand((unsigned)time(0));

    n = rand()% 100 + 1;

    while (n != m){
        cin >> m;
        if (m > n)
            cout << "Muito alto! tente novamente." << endl;
        if (m < n)
            cout << "Muito baixo! tente novamente." << endl;
    }

    cout << "Parebens. Voce adivinhou o numero";


return 0;
}
