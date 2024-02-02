#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int x, n, m; cin >> x >> n >> m;
        for(int j = 0; j < n; j++) {
            if(x > 20) x = (x/2) + 10;
            else break;
        } for(int j = 0; j < m; j++) {
            if(x > 0) x -= 10;
            else if(x <= 0) break;
        } if(x <= 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}