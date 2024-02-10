#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    long long n; cin >> n;
    if(n % 2 == 0) cout << n/2 << endl;
    else cout << -1 * (n+1)/2 << endl;
}

// submission 1: wrong answer on test 5
// submission 2: accepted (used int datatype for n instead of type long long. n could reach up to 1e15)