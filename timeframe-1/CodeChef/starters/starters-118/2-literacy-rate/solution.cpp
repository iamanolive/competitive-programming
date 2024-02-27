#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        double p, l; cin >> p >> l;
        if((l / p) * 100 >= 75.00) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}