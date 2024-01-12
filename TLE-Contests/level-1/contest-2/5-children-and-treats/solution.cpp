#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int candy, kids; cin >> candy >> kids;
        if(candy < kids) cout << min(candy, kids/2) << endl;
        else {
            int perChild = candy / kids;
            int total = kids * perChild;
            int remaining = candy % kids;
            total += min(kids/2, remaining);
            cout << total << endl;
        }
    }
}