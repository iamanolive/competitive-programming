#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    long long *budget = new long long[n];
    for(int i = 0; i < n; i++)
        cin >> budget[i];
    sort(budget, budget + n);
    long long people = n;
    long long maxRevenue = -1;
    for(int i = 0; i < n; i++) {
        long long val = budget[i] * people;
        if(val > maxRevenue) maxRevenue = val;
        people--;
    } cout << maxRevenue << '\n';
}