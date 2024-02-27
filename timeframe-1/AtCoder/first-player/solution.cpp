#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string *names = new string[n];
    int *ages = new int[n];
    int lowestAge = INT_MAX;
    int lowestIndex = -1;
    for(int i = 0; i < n; i++) {
        cin >> names[i];
        cin >> ages[i];
        if(ages[i] < lowestAge) {
            lowestAge = ages[i];
            lowestIndex = i;
        }
    } for(int i = lowestIndex; i < n; i++)
        cout << names[i] << '\n';
    for(int i = 0; i < lowestIndex; i++)
        cout << names[i] << '\n';
}