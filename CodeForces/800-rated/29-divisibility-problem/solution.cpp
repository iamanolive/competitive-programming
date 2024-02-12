#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int a, b; cin >> a >> b;
        if(a % b == 0) cout << 0 << endl;
        else if(b > a) cout << b - a << endl;
        else cout << b - a % b << endl;
    }
}

// replace a with a + 1
// find min moves to make a divisible by b

// submission 1: wrong answer on test 1
// submission 2: time limit exceeded on test 4
// submission 3: accepted
