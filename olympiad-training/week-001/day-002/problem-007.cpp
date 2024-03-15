#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        if(n <= 1) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            for(int j = 0; j < n / 2; j++)
                cout << char(j + 65) << char(j + 65);
            if(n % 2 != 0) cout << char((n / 2) + 64);
            cout << endl;
        }
    }
}