#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    string players; cin >> players;
    int counter = 1;
    string result = "NO";
    for(int i = 1; i < players.length(); i++) {
        if(players[i] == players[i-1]) counter++;
        else if(players[i] != players[i-1]) {
            if(counter >= 7) {
                result = "YES";
                break;
            } else counter = 1;
        } if(counter >= 7) {
            result = "YES";
            break;
        }
    } cout << result << endl;
}