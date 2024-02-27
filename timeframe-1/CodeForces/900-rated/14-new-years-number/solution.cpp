#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int num = n / 2020;
        int counter = n % 2020;
        if(counter <= num) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}