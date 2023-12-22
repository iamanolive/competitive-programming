#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, k, a; cin >> n >> k >> a;
    string stra = to_string(a);
    int sizeofa = stra.length();
    long long nintok = (n % (long long)(pow(10, sizeofa) * 10)) * (k % (long long)(pow(10, sizeofa) * 10));
    if(nintok % a != 0) cout << "double\n";
    else if((nintok / a) > INT_MAX) cout << "long long\n";
    else cout << "int\n";
}