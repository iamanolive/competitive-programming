#include <iostream>
using namespace std;

int main() {
    int x, y; cin >> x >> y;
    if(x - y < 0 && abs(x - y) <= 2)
        cout << "Yes\n";
    else if(x - y >= 0 && abs(x - y) <= 3)
        cout << "Yes\n";
    else
        cout << "No\n";
}