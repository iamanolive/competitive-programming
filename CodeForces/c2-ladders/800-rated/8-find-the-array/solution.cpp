#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int x; cin >> x;
        int counter = 1, sum = 0, y = 1;
        while(true) {
            sum += y;
            if(sum >= x) break;
            y += 2;
            counter++;
        } cout << counter << endl;
    }
}