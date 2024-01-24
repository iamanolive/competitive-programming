#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == x2 && y1 == y2) cout << 0 << endl;
        
        else if(x1 == x2 && y2 > y1) cout << 2 * abs(y1 - y2) << endl;
        else if(y2 < y1 && x1 == x2) cout << -1 << endl;
        else if(x1 < x2 && y1 == y2) cout << -1 << endl;
        else if(x1 > x2 && y1 == y2) cout << abs(x1 - x2) << endl;
        
        else if(y2 > y1 && x1 < x2) {
            if(y1 + (y1 - x2) < x2) cout << -1 << endl; // change this line and submit
            else cout << abs(y1 - y2) + abs(y2 - x2) << endl;
        } else if(y2 > y1 && x1 > x2) cout << abs(y1 - y2) + abs(y2 - x2) << endl;
        else cout << -1 << endl;
    }
}