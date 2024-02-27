#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, k, x; cin >> n >> k >> x;
        if(n % 2 == 0) {
            if(x == 2) {
                cout << "YES" << endl;
                cout << n << endl;
                for(int j = 0; j < n; j++)
                    cout << 1 << " ";
            } else if(k >= 2) {
                cout << "YES" << endl;
                cout << n/2 << endl;
                for(int j = 0; j < n/2; j++)
                    cout << 2 << " ";
            } else cout << "NO";
            cout << endl;
        } else {
            if(x != 1) {
                cout << "YES" << endl;
                cout << n << endl;
                for(int j = 0; j < n; j++)
                    cout << 1 << " ";
                cout << endl;
            } else if(x == 1 && k >= 3) {
                cout << "YES" << endl;
                cout << (n - 3) / 2 + 1 << endl;
                cout << 3 << " ";
                n -= 3;
                for(int j = 0; j < n/2; j++)
                    cout << 2 << " ";
                cout << endl;
            } else cout << "NO" << endl;
        }
    }
}