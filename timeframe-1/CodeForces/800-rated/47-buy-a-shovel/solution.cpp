#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int k, r; cin >> k >> r;
    int counter = 1;
    int cost = k;
    while(true) {
        if(cost % 10 == 0 || cost % 10 == r) break;
        cost += k;
        counter++;
    } cout << counter << endl;
}