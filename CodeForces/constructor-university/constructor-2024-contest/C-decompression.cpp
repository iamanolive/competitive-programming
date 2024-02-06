#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        string w; cin >> w;
        vector<int> count;
        for(int j = 0; j < w.length(); j++) {
            if(w[j] >= '1' && w[j] <= '9') {
                count.push_back(w[j] - 48);
                w.erase(j, 1);
                j = 0;
            } else if(w[j] == '0') {
                w.erase(j, 1);
                j = 0;
            }
        } for(int j = 0; j < w.length(); j++) {
            for(int k = 0; k < count[j]; k++)
                cout << w[j];
        } cout << endl;
    }
}