#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int a, b; cin >> a >> b;
        if(abs(a - b) % 10 == 0) cout << abs(a - b) / 10 << endl;
        else cout << abs(a - b) / 10 + 1 << endl;
    }
}