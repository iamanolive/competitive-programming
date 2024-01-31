#include <iostream>
using namespace std;

int solution(int n, int m) {
    bool notPower = false;
    if(m > n) return n;
    int counter = 0;
    int rem = 0;
    while(true) {
        counter += n;
        int tmp = n + rem;
        n = (n+rem) / m;
        rem = tmp%m;
        if(n < m) return counter + rem + 1;
    }
}

int main() {
    int n, m; cin >> n >> m;
    cout << solution(n, m) << endl;
}