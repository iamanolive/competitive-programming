#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

int main() {
    int n, m; cin >> n >> m;
    int *a = new int[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    long long sum = 0;
    for(int i = 0; i < m; i++) {
        if(a[i] > 0) break;
        else sum += a[i] * -1;
    } cout << sum << endl;
}