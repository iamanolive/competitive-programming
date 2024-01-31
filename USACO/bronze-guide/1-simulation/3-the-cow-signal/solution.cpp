#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    int m, n, k;
    cin >> m >> n >> k;
    string *arr = new string[m];
    for(int i = 0; i < m; i++)
        cin >> arr[i];
    for(int i = 0; i < m * k; i++) {
        for(int j = 0; j < n * k; j++) {
            cout << arr[i / k][j / k];
        } cout << endl;
    }
}