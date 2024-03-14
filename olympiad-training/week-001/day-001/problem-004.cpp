#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    long long max = 0;
    int *budget = new int[n];
    for(int i = 0; i < n; i++)
        cin >> budget[i];
    sort(budget, budget + n);
    for(int i = 0; i < n; i++)
        if((n - i) * budget[i] > max) max = (n - i) * budget[i];
    cout << max << endl;
}