#include <iostream>
using namespace std;

int main(){
    int total, n;
    cin >> total >> n;
    int money = 0;
    for (int i=0; i<n; i++){
        int price, cnt;
        cin >> price >> cnt;
        if (price < 0 || cnt < 0){
            cout << "price or count err";
            break;
        }
        money += price * cnt;
    }
    if (total == money) cout << "Yes";
    else cout << "No";
    return 0;
}