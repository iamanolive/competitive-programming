#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int x, k; cin >> x >> k;
        if(x % k != 0) cout << 1 << endl << x << endl;
        else if(x % k == 0) {
            for(int j = x - 1; j > 0; j--) {
                if(j % k != 0 && (x - j) % k != 0) {
                    cout << 2 << endl << j << " " << x - j << endl;
                    break;
                }
            }
        }
    }
}