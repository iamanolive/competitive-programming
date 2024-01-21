#include <iostream>
using namespace std;

int solve(int x, int y) {
    int currentPosition = x; 
    int multiply = 1;
    long long result = 0;
    if(x == y) return 0;
    while(true) {
        currentPosition = x + multiply;
        if(y == currentPosition)
            return result + abs(currentPosition - x);
        else if(y > currentPosition && y < x)
            return result + abs(x - y);
        else if(y < currentPosition && y > x)
            return result + abs(x - y);
        result += 2 * abs(currentPosition - x);
        multiply *= -2;
    }
}

int main() {

    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    
    int x, y; cin >> x >> y;
    cout << solve(x, y) << endl;   
}