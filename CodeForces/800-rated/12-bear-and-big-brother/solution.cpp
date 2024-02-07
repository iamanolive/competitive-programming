#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    long long a, b; cin >> a >> b;
    int counter = 0;
    while(true) {
        a *= 3;
        b *= 2;
        counter++;
        if(a > b) break;
    } cout << counter << endl;
}