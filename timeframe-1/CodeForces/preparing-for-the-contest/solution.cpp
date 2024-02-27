#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        for(int j = (n - k); j > 0; j--)
            cout << j << " ";
        for(int j = (n - k + 1); j <= n; j++)
            cout << j << " ";
        cout << endl;
    }
}