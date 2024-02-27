#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        if(n % 2 == 0) {
            for(int j = n - 1; j > 0; j -= 2)
                cout << j << " ";
            for(int j = 2; j <= n; j += 2)
                cout << j << " ";
            cout << endl;
        } else {
            for(int j = n; j > 0; j -= 2)
                cout << j << " ";
            for(int j = 2; j <= n; j += 2)
                cout << j << " ";
            cout << endl;
        }
    }
}