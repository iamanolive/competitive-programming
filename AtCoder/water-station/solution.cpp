#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    int behind = n - (n % 5);
    int ahead = n + (5 - (n % 5));
    if(abs(n - behind) < abs(n - ahead)) cout << behind;
    else cout << ahead;
}