#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        vector<int> stones;
        int front1, front2;
        for(int j = 0; j < n; j++) {
            int x; cin >> x;
            stones.push_back(x);
            if(x == 1) front1 = j + 1;
            else if(x == n) front2 = j + 1;
        } if(front1 <= (n - front1) && front1 < front2 && front1 <= (n - front2))
            stones.erase(stones.begin(), stones.begin() + front1 - 1);
        else if(front2 <= (n - front2) && front2 < front1 && front2 <= (n - front2))
            stones.erase(stones.begin(), stones.begin() + front2 - 1);
        else if((n - front1) < front1 && (n - front1) < front2 && (n - front1) < (n - front2))
            stones.erase(stones.end() - front1, stones.end());
        else
            stones.erase(stones.end() - front2, stones.end());
        long long sum = n - stones.size();

        if(find(stones.begin(), stones.end(), 1) == stones.end()) {
            front1 = find(stones.begin(), stones.end(), 1) - stones.begin();
            sum += min(front1, n - front1);
        }
        else if(find(stones.begin(), stones.end(), n) == stones.end()) {
            front2 = find(stones.begin(), stones.end(), n) - stones.begin();
            sum += min(front2, n - front2);
        } cout << sum << endl;            
    }
}