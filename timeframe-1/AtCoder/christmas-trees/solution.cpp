#include <iostream>
#include <cmath>
using namespace std;

long long findCeil(long long num, long long denom) {
    if(num < 0)
        return num / denom;
    if(num % denom == 0) return num / denom;
    else return num / denom + 1;
}

long long findFloor(long long num, long long denom) {
    if(num < 0)
        return (num - denom + 1) / y;
    return num / denom;
}

int main() {
    long long a, m, l, r; 
    cin >> a >> m >> l >> r;
    long long point1 = findCeil((l - a), m);
    long long point2 = findFloor((r - a), m);
    cout << point2 - point1 + 1 << '\n';
}