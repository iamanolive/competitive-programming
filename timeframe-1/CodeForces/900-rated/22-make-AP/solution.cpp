#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int a, b, c; cin >> a >> b >> c;
        if(abs(a - c) % 2 == 0) cout << "YES" << endl;
        else if(a == b && a > c && a%c == 0 || b == c && c > a && c%a == 0 || a == c && a > b && a%b == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}