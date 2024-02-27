#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        long long n; cin >> n;
        if(n % 2 == 0) cout << n / 2 - 1 << endl;
        else cout << n / 2 << endl;
    }
}