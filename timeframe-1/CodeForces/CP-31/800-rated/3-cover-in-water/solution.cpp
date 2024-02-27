#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> water;
        int currentCount = 0;
        for(int j = 0; j < n; j++) {
            if(s[j] == '.')
                currentCount++;
            else if(s[j] == '#') {
                water.push_back(currentCount);
                currentCount = 0;
            } if(j == n - 1)
                water.push_back(currentCount);
        } sort(water.begin(), water.end(), greater<int>());
        if(water[0] > 2)
            cout << 2 << endl;
        else {
            long long sum = 0;
            for(int j = 0; j < water.size(); j++)
                sum += water[j];
            cout << sum << endl;
        }
    }
}