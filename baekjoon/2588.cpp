#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int f,s,t; // first, second, third
    t = n2 % 10;
    s = (n2 % 100 - t) / 10;
    f = (n2 - 10 * s - t) / 100;

    int r1, r2, r3;
    r1 = n1 * t;
    r2 = n1 * s;
    r3 = n1 * f;

    cout << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;
    cout << r1 + r2 * 10 + r3 * 100;

    return 0;
}