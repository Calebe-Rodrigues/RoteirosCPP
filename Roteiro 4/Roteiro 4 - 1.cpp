#include <iostream>

using namespace std;


int main(){
    int n, maior = 0;

    while (1){
        cin >> n;
        if (n == 0) break;
        if (n > maior) maior = n;
    }

    cout << endl << "O maior numero eh " << maior;


return 0;
}
