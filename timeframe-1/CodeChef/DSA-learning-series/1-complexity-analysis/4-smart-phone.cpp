#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    int *revenue = new int[n];
    for(int i = 0; i < n; i++)
        cin >> revenue[i];
    sort(revenue, revenue + n);
    long long maxRevenue = 0;
    for(int i = 0; i < n; i++) {
        long long total = (n - i) * (long long) revenue[i];
        if(total > maxRevenue) maxRevenue = total;
    } cout << maxRevenue << endl;
}