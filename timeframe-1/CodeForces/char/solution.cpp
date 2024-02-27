#include <bits/stdc++.h>
using namespace std;

int main() {
    char x; cin >> x;
    if(islower(x))
        cout << char(x - 32) << '\n';
    else if(isupper(x))
        cout << char(x + 32) << '\n';
}