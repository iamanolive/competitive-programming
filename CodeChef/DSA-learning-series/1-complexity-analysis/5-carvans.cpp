#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *maximumSpeed = new int[n];
        int *actualSpeed = new int[n];
        for(int j = 0; j < n; j++) {
            cin >> maximumSpeed[j];
            actualSpeed[j] = maximumSpeed[j];
        } int counter = 1;
        for(int j = 1; j < n; j++) {
            if(maximumSpeed[j] > maximumSpeed[j-1])
                actualSpeed[j] = maximumSpeed[j-1];
            else counter++;
        } cout << counter << endl;
    }
}