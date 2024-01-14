#include <iostream>
using namespace std;

#define endl '\n'
const long long MOD = 1e9 + 7;

int main() {
    long long n; cin >> n;
    int *dice = new int[n];
    dice[0] = 1;
    for(int i = 1; i < n; i++)
        dice[i] = (dice[i - 1] * 2) % MOD;
    cout << dice[n - 1] << endl;
}