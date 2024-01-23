#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        long long sum = 0;
        int *arr = new int[n];
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
            sum += arr[j];
        } int result = sum - n;
        if(result < 0) cout << 1 << endl;
        else cout << result << endl;
    }
}