#include <iostream>
using namespace std;

int main() {
    int cost = 0;
    int k, n, w; cin >> k >> n >> w;
    for(int i = 1; i <= w; i++)
        cost += i * k;
    cout << max(0, cost - n) << endl;
}