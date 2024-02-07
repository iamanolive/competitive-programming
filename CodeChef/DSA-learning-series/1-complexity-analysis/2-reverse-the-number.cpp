#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        string n; cin >> n;
        reverse(n.begin(), n.end());
        for(int j = 0; j < n.length(); j++) {
            if(n[j] == '0') {
                n.erase(j, 1);
                j = -1;
            } else break;
        } cout << n << endl;
    }
}