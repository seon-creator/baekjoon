#include <iostream>
using namespace std;

int main(){
    int chess[6] = {1, 1, 2, 2, 2, 8};
    int count[6];
    for (int i=0; i<6; i++){
        cin >> count[i];
        if (count[i] > chess[i]){
            count[i] = chess[i] - count[i];
        }
        else count[i] = chess[i] - count[i];

        cout << count[i] << ' ';
    }
    return 0;
}