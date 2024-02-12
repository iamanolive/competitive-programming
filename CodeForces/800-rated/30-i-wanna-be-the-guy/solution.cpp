#include <iostream>
#include <set>

using namespace std;
#define endl '\n'

int main() {
    // N levels game
    // X can pass P levels, Y can pass q levels
    // indices of levels X can pass, indices of levels Y can pass
    // if arrP and arrQ together contain all the numbers from 1 to N (both inclusive), then they win
    // else they don't

    int n; cin >> n;
    set<int> levels;

    int p; cin >> p;
    for(int i = 0; i < p; i++) {
        int index; cin >> index;
        levels.insert(index);
    } int q; cin >> q;
    for(int i = 0; i < q; i++) {
        int index; cin >> index;
        levels.insert(index);
    } string result = "I become the guy.";
    for(int i = 1; i <= n; i++) {
        if(levels.find(i) == levels.end()) {
            result = "Oh, my keyboard!";
            break;
        }
    } cout << result << endl;

}