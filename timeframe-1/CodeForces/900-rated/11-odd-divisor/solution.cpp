#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        long long n; cin >> n;
        if(n % 2 != 0) cout << "YES" << endl;
        else if((n & (n - 1)) == 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}