#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int maxWealth = 0;
    int maxIndex = 0;
    int counter = 0;
    vector<int> result;
    vector<int> wealth;
    for(int i = 0; i < m + n; i++) {
        int val; cin >> val;
        wealth.push_back(val);
    } for(int i = 0; i < wealth.size(); i++) {
        if(counter >= m) break;
        if(wealth[i] != -1 && wealth[i] > maxWealth) {
            maxWealth = wealth[i];
            maxIndex = i;
        } else if(wealth[i] == -1) {
            result.push_back(maxWealth);
            wealth.erase(wealth.begin() + maxIndex);
            wealth.erase(wealth.begin() + i - 1);
            i = -1;
            counter++;
            maxWealth = 0;
        }
    } for(int i = 0; i < m; i++)
        cout << result[i] << endl;
}