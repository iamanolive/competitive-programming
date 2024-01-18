#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int x, y; cin >> x >> y;
    int currentPosition = x;
    int term = 1;
    long long result = 0;
    while(true) {
        if((y >= currentPosition && y <= currentPosition + term) || (y <= currentPosition && y >= currentPosition + term)) {
            result += abs(y - currentPosition);
            break;
        } result += 
        term *= -2;
    } cout << result << endl;
}