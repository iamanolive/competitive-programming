#include <bits/stdc++.h>
using namespace std;

long long power(long long number) {
    long long result = 1;
    for(int i = 0; i < number; i++)
        result *= number;
    return result;
}

int main() {
    long long b; cin >> b;
    long long i = 1;
    long long num = power(i);
    while(num < b) {
        i++;
        num = power(i);
    } if(num == b) cout << i << '\n';
    else cout << -1 << '\n';
}