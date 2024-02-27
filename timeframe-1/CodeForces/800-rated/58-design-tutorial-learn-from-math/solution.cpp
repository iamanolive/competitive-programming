#include <iostream>
#include <cmath>

using namespace std;
#define endl '\n'

bool isComposite(int n) {
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return true;
    return false;
}

int main() {
    int n; cin >> n;
    if(n % 2 == 0) cout << 4 << " " << n - 4 << endl;
    else {
        for(int i = 4; i < n - 3; i++) {
            if(isComposite(i) && isComposite(n - i)) {
                cout << i << " " << n - i << endl;
                break;
            }
        }
    }
}