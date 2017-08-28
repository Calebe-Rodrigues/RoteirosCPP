#include <iostream>
#include <cstdlib>


using namespace std;

int main(){
    int n, rolls = 0;
    int dice[6] = {0};

    while (1){
        cin >> n;
        if (n == 0) break;
        dice[n-1]++;
        rolls ++;
    }

    for (int i=0; i<6;i++){
        cout << "N 1 = " << (dice[i]*100)/(double)rolls << "%%" << endl;
    }


return 0;
}
