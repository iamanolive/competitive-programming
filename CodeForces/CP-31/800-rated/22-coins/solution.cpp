#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        long long n, k; cin >> n >> k;
        if(n % k == 0 || n % 2 == 0 || (n % k) % 2 == 0)
            cout << "YES" << endl;
        else if(n % 2 != 0 && k % 2 != 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}