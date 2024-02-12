#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int a, b; cin >> a >> b;
        if(a > b) swap(a, b);
        if(a == 1 && b < 3) cout << "No" << endl;
        else if(a % 2 != 0 && b % 2 != 0) cout << "No" << endl;
        
    }
}