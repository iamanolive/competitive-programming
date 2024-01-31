#include <iostream>
using namespace std;

int solution(int n, int m) {
    int counter = 0;
    while(true) {
        counter += n;
        n /= m;
        if(n == 1) return counter + 1;
    }
}

int main() {
    int n, m; cin >> n >> m;
    cout << solution(n, m) << endl;
}