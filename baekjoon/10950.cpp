#include <iostream>
using namespace std;

int main(){
    int n;
    int a, b;
    cin >> n;
    if (n <= 0) cout << "you enter wrong number";
    else{
        for (int i=0; i<n; i++){
            cin >> a >> b;
            cout << a+b << endl;
        }
    }
    return 0;
}