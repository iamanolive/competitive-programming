#include <iostream>
using namespace std;

long long solution(int n, int k) {
    if(n < k) return n;
    long long result = n;
    long long rem = 0;
    while(true) {
        if(n == 1 && rem == 0) return result;
        rem = n % k;
        n = n / k + rem;
        result += n - rem;
    }
}

int main() {
    long long n, k; cin >> n >> k;
    cout << solution(n, k) << endl;
}

