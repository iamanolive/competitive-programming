#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        long long n, k, a; cin >> n >> k >> a;
        string stringOfA = to_string(a);
        long long lengthOfA = stringOfA.length();
        lengthOfA = pow(lengthOfA, 10) * 10;
        long long nIntok = (n % lengthOfA) * (k % lengthOfA);
        if(nIntok % n != 0) cout << "double\n";
        else if((n / a) * k > INT_MAX) cout << "long long\n";
        else cout << "int\n";
    }
}