#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        long long sum = 0;
        int *arr = new int[n];
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
            sum += arr[j];
        } if(sum == n) cout << 0 << '\n';
        else if(sum < n) cout << 1 << '\n';
        else cout << sum - n << '\n'; 
        
    }
}