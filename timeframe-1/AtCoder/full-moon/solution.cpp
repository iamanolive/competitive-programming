#include <iostream>
using namespace std;

int main() {
    int n, m, p; cin >> n >> m >> p;
    int counter = 0;
    for(int i = m; i <= n; i += p)
        counter++;
    cout << counter << '\n';
}