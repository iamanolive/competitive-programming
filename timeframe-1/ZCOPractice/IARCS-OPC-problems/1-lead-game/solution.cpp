#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int leadPlayer = 0;
    int maxLead = -1;
    int player1 = 0, player2 = 0;
    for(int i = 0; i < n; i++) {
        int p1, p2;
        cin >> p1 >> p2;
        player1 += p1;
        player2 += p2;
        if(abs(player1 - player2) > maxLead) {
            maxLead = abs(player1 - player2);
            if(player1 > player2) leadPlayer = 1;
            else leadPlayer = 2;
        }
    } cout << leadPlayer << " " << maxLead << endl;
}