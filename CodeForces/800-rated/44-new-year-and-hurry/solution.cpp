#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int n, k; cin >> n >> k;
    int totalMins = 240 - k;
    int counter = 0;
    int i = 1;
    while(true) {
        if(i > n) break;
        if(totalMins - (5 * i) > -1) {
            counter++;
            totalMins -= 5 * i;
        } else break;
        i++;
    } cout << counter << endl;
}