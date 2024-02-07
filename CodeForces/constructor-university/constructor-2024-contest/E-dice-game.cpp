#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int p1, p2; cin >> p1 >> p2;
        int p1sum = 0, p2sum = 0;
        int *player1rolls = new int[p1];
        for(int j = 0; j < p1; j++) {
            cin >> player1rolls[j];
            p1sum += player1rolls[j];
        } int *player2rolls = new int[p2];
        for(int j = 0; j < p2; j++) {
            cin >> player2rolls[j];
            p2sum += player2rolls[j];
        } sort(player1rolls, player1rolls + p1);
        sort(player2rolls, player2rolls + p2);
        
        if(p1sum > p2) cout << 'Y';
        else cout << 'N';
        
        // check for possibility of a draw
        
        
        if(p2sum > p1 * 4) cout << 'Y' << endl;
        else cout << 'N' << endl;
    }
}