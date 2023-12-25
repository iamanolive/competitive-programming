#include <iostream>
using namespace std;


void subproblem(int x, int y, bool &up, bool &down, bool &right, bool &left) {
    if(x < 0) left = true;
    else if(x > 0) right = true;
    if(y < 0) down = true;
    else if(y > 0) up = true;
    return;
}


string solve(int n) {
    bool up = false, down = false, right = false, left = false;
    for(int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        subproblem(x, y, up, down, right, left);
    } if(up && down && right && left)
        return "NO";
    return "YES";
}


int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        cout << solve(n) << '\n';
    }
}