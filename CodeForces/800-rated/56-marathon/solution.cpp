#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        int counter = 0;
        if(b > a) counter += 1;
        if(c > a) counter += 1;
        if(d > a) counter += 1;
        cout << counter << endl;
    }
}