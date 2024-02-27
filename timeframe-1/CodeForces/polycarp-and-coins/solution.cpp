#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int c1 = 0, c2 = 0;
        if(n % 3 == 0) {
            c1 = n/3;
            c2 = n/3;
        } else if(n % 3 == 1) {
            c1 = n/3 + 1;
            c2 = n/3;
        } else if(n % 3 == 2) {
            c1 = n/3;
            c2 = n/3 + 1;
        } cout << c1 << " " << c2 << '\n';
    }
}