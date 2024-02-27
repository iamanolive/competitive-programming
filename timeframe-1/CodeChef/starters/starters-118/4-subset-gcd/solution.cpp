#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, k; cin >> n >> k;
        if(k == 1) cout << n;
        else if(n == k)
            for(int j = 1; j <= n; j++)
                cout << j << " ";
        else if((n / k) * k < n || ((n / k) * k == n && (n % k == 0))) {
            int temp = n/k;
            for(int j = 0; j < k; j++) {
                cout << temp << " ";
                temp += n/k;
            }
        } else if(k <= n/2) {
            int temp = 2;
            for(int j = 0; j < k; j++) {
                cout << temp << " ";
                temp += 2;
            }
        } else
            for(int j = 1; j <= k; j++)
                cout << j << " ";
        cout << endl;
    }
}