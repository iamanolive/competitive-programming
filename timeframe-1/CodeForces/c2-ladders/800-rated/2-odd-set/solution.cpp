#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int even = 0, odd = 0;
        int *arr = new int[2 * n];
        for(int j = 0; j < 2 * n; j++) {
            cin >> arr[j];
            if(arr[j] % 2 == 0) even++;
            else odd++;
        } if(even == odd) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}