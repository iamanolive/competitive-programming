#include <iostream>
using namespace std;

int main() {
    int n, s, k;
    cin >> n >> s >> k;
    long long totalCost = 0;
    for(int i = 0; i < n; i++) {
        int p, q;
        cin >> p >> q;
        totalCost += p * q;
    } if(totalCost < s) totalCost += k;
    cout << totalCost << '\n';
}