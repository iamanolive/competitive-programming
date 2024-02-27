#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        // if n is a power of 2 and n != 2, print YES. else print NO.
        if(((n & (n - 1)) == 0 )&& (n != 2)) {
            cout << "YES" << endl;
            long long sum = 0;
            for(int j = 2; j <= n; j += 2) {
                cout << j << " ";
                sum += j;
            } int num = 1;
            for(int count = 0; count < n / 2 - 1; count++) {
                cout << num << " ";
                sum -= num; num += 2;
            } cout << sum << endl;
        } else cout << "NO" << endl;
    }
}