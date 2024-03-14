#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        
        int activities; cin >> activities;
        string origin; cin >> origin;
        
        long long points = 0;
        
        for(int j = 0; j < activities; j++) {
            string activityStr; cin >> activityStr;
            if(activityStr == "CONTEST_WON") {
                int rank; cin >> rank;
                points += 300 + max(0, (20 - rank));
            } else if(activityStr == "BUG_FOUND") {
                int severity; cin >> severity;
                points += severity;
            } else if(activityStr == "TOP_CONTRIBUTOR") {
                points += 300;
            } else if(activityStr == "CONTEST_HOSTED") {
                points += 50;
            }
        }
        
        if(origin == "INDIAN") cout << points / 200 << endl;
        else cout << points / 400 << endl;
    }
}