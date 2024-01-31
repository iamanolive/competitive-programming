#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'

int main() {
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n; cin >> n;
    int initial1 = 1, initial2 = 2, initial3 = 3;
    int guess1 = 0, guess2 = 0, guess3 = 0;
    for(int i = 0; i < n; i++) {
        int a, b, g; cin >> a >> b >> g;
        if(a == initial1) initial1 = b;
        else if(b == initial1) initial1 = a;
        if(a == initial2) initial2 = b;
        else if(b == initial2) initial2 = a;
        if(a == initial3) initial3 = b;
        else if(b == initial3) initial3 = a;

        if(g == initial1) guess1++;
        else if(g == initial2) guess2++;
        else if(g == initial3) guess3++;
    } cout << max(guess1, max(guess2, guess3));
}