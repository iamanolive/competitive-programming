#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, x; cin >> n >> x;
        cout << max(0, n - x) << endl;
    }
}