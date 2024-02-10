#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    for(int i = 0; i < n - 1; i++) {
        if(i % 2 == 0) cout << "I hate that ";
        else cout << "I love that ";
    } if(n % 2 == 0) cout << "I love it" << endl;
    else cout << "I hate it" << endl;
}