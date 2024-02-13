#include <iostream>
#include <cmath>

using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        string ticket; cin >> ticket;
        int n1 = (ticket[0] - 48) + (ticket[1] - 48) + (ticket[2] - 48);
        int n2 = (ticket[3] - 48) + (ticket[4] - 48) + (ticket[5] - 48);
        if(n1 == n2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}