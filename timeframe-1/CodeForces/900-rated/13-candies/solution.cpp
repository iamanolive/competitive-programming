#include <iostream>
using namespace std;

int result(int n) {
    int i = 3;
    while(i <= n) {
        if(n % i == 0) return i;
        i = i * 2 + 1;
    }
}

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        cout << n / result(n) << endl;
    }
}