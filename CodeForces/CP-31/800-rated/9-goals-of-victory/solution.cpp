#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *arr = new int[n - 1];
        long long sum = 0;
        for(int j = 0; j < n - 1; j++) {
            cin >> arr[j];
            sum += arr[j];
        } cout << sum * -1 << endl;        
    }
}