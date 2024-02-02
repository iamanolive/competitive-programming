#include <iostream>
using namespace std;

long long solution(int n, int m) {
    long long result = n;
    int rem = 0;
    int tmp = n;
    while(true) {
        if(n == 0 && rem < m) return result;
        tmp = (n + rem) / m;
        rem = n % m;
        n = tmp;
        result += n;
    }
}

int main() {
    int n, m; cin >> n >> m;
    cout << solution(n, m) << endl;
}