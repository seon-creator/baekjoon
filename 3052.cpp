#include <iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    int arr[5];
    for (int i=0; i<5; i++){
        cin >> n;
        arr[i] = n;
        sum += n;
    }
    double avg;
    avg = sum / 5.0;
    
    for (int i=4; i>=0; i--){
        int max = arr[0];
        int max_index = 0;
        for (int j=0; j<=i; j++){
            if (max < arr[j]){
                max = arr[j];
                max_index = j;
            }
        }
        int tmp = arr[i];
        arr[i] = max;
        arr[max_index] = tmp;
    }
    int mid = arr[2];

    cout << avg << endl << mid << endl;

    return 0;
}