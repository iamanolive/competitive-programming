#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    long long *even = new long long [1000];
    long long *odd = new long long [1000];
    long long numEven = 2;
    long long numOdd = 1;
    for(int i = 0; i < 1000; i++) {
        even[i] = numEven * numEven;
        numEven += 2;
    } for(int i = 0; i < 1000; i++) {
        odd[i] = numOdd * numOdd;
        numOdd += 2;
    } int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        long long result = 0;
        if(n % 2 == 0)
            for(int j = 0; j < (n + 1) / 2; j++)
                result += even[j];
        else
            for(int j = 0; j < (n + 1) / 2; j++)
                result += odd[j];
        cout << result << endl;
    }
}