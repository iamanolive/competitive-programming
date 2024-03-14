#include <iostream>
using namespace std;
#define endl '\n'

int flip(int i, int n, int q) {
    if(n % 2 == 0) return n / 2;
    else if(i == q) return n / 2;
    else if(i != q) return (n + 1) / 2;
}

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int g; cin >> g;
        for(int j = 0; j < g; j++) {
            int initState, coins, headtail;
            cin >> initState >> coins >> headtail;
            cout << flip(initState, coins, headtail) << endl;
        }
    }
}