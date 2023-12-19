#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if((l2 >= l1 && l2 <= r1) || (r1 >= l2 && r1 <= r2) || (l1 >= l2 && l1 <= r2) || (r2 >= l1 && r2 <= l2))
        cout << max(l1, l2) << " " << min(r1, r2) << '\n';
    else
        cout << -1 << '\n';
}