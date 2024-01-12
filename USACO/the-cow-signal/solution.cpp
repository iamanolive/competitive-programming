#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    int m, n, k;
    cin >> m >> n >> k;
    for(int i = 0; i < m; i++) {
        string str; cin >> str;
        for(int j = 0; j < k; j++) {
            for(int l = 0; l < n; l++)
                cout << str[l] << str[l];
            cout << endl;
        }
    }
}