#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d; cin >> a >> b >> c >> d;
    if(
        a + b - c == d || (d - a) / c == b || 
        a - b + c == d || (d - a) / c == -b ||
        (d + c) / a == b || (d - c) / a == b
    ) cout << "YES\n";
    else cout << "NO\n";
}