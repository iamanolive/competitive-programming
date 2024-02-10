// invited N friends
// friend at index i received gift from friend p[i] (1-based indexing)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    vector<int> gifts;
    for(int i = 0; i < n; i++) {
        int val; cin >> val;
        gifts.push_back(val);
    } for(int i = 1; i <= n; i++) {
        auto it = find(gifts.begin(), gifts.end(), i);
        cout << (it - gifts.begin()) + 1 << " ";
    } cout << endl;
}