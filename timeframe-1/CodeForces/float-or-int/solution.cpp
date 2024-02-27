#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float n; cin >> n;
    if(round(n) == n)
        cout << "int " << n << '\n';
    else
        cout << "float " << floor(n) << " " << (n - floor(n)) << '\n';
}