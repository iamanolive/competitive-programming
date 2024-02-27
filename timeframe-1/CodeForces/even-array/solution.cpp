#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *arr = new int[n];
        int wrongOdd = 0, wrongEven = 0;
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
            if(arr[j] % 2 != 0 && j % 2 == 0)
                wrongOdd++;
            else if(arr[j] % 2 == 0 && j % 2 != 0)
                wrongEven++;
        } if(wrongOdd == wrongEven) cout << wrongEven << endl;
        else cout << -1 << endl;
    }
}