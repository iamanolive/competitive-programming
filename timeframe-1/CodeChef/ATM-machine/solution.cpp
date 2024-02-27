#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, k; cin >> n >> k;
        int *amount = new int[n];
        string result = "";
        for(int j = 0; j < n; j++) {
            cin >> amount[i];
            if(k >= amount[i]) {
                k -= amount[i];
                result += '1';
            } else result += '0';
        } cout << result << '\n';
    }
}




2 + 1 hrs