#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        string b; cin >> b;
        string a = "";
        for(int j = 0; j < b.length(); j += 2)
            a += b[j];
        a += b[b.length() - 1];
        cout << a << endl;
    }
}