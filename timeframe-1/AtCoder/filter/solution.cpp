#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int val; cin >> val;
        if(val % 2 == 0) cout << val << " ";
    }
}