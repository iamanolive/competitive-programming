#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    int counter = 0;
    for(int i = 0; i < t; i++) {
        int a, b, c; cin >> a >> b >> c;
        if(a + b + c > 1) counter++;
    } cout << counter << endl;
}