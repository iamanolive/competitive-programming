#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    if(abs(a - b) <= 1 && a != b) cout << "YES\n";
    else cout << "NO\n";
}