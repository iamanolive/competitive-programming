#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string stones; cin >> stones;
    for(int i = 1; i < stones.length(); i++) {
        if(stones[i] == stones[i - 1]) {
            stones.erase(i, 1);
            i -= 2;
        }
    } cout << n - stones.length() << endl;
}