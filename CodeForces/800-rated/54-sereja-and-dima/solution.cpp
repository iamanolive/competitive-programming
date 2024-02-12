#include <iostream>
#include <vector>

using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    vector<int> cards;
    for(int i = 0; i < n; i++) {
        int card; cin >> card;
        cards.push_back(card);
    } int s = 0; int d = 0;
    while(true) {
        if(cards.size() == 0) break;
        if(cards.size() == 1) {
            s += cards[0];
            break;
        } else if(cards[0] > cards[cards.size() - 1]) {
            s += cards[0];
            cards.erase(cards.begin());
        } else {
            s += cards[cards.size() - 1];
            cards.pop_back();
        }
        if(cards.size() == 0) break;
        if(cards.size() == 1) {
            d += cards[0];
            break;
        } else if(cards[0] > cards[cards.size() - 1]) {
            d += cards[0];
            cards.erase(cards.begin());
        } else {
            d += cards[cards.size() - 1];
            cards.pop_back();
        }
    } cout << s << " " << d << endl;
}