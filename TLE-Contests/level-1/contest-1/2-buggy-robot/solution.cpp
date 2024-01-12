#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    long long total = 0;
    total += max(min(n - x1, x1), min(n - y1, y1));
    total += max(min(n - x2, x2), min(n - y2, y2));
    cout << total << endl;
}