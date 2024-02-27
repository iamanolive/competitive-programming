#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, a, b; cin >> n >> a >> b;
        if(b == 1) {
            for(int j = 0; j < n; j++)
                cout << 'a';
            cout << endl;
        } else if(a == b) {
            int count = 0;
            int letter = 0;
            while(true) {
                if(count == n) break;
                if(letter == a) letter = 0;
                cout << char(97 + letter);
                letter++; count++;
            } cout << endl;
        } else if(a > b) {
            int count = 0;
            int current = 0;
            while(true) {
                if(count == n) break;
                if(current == b) current = 0;
                cout << char(97 + current);
                current++; count++;
            } cout << endl;
        }
    }
}