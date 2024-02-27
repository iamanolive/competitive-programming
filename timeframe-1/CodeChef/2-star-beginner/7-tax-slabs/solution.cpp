#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        double income; cin >> income;
        double taxes = 0;
        if(income > 250000) taxes += 0.05 * (min(income, 500000.0) - 250000);
        if(income > 500000) taxes += 0.1 * (min(income, 750000.0) - 500000);
        if(income > 750000) taxes += 0.15 * (min(income, 1000000.0) - 750000);
        if(income > 1000000) taxes += 0.2 * (min(income, 1250000.0) - 1000000);
        if(income > 1250000) taxes += 0.25 * (min(income, 1500000.0) - 1250000);
        if(income > 1500000) taxes += 0.3 * (income - 1500000);
        cout << int (income - taxes) << endl;
    }
}