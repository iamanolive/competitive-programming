#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> water;
        int currentCounter = 0;
        for(int j = 0; j < n; j++) {
            if(s[j] == '.') currentCounter++;
            else if(s[j] == '#' && currentCounter > 0) {
                water.push_back(currentCounter);
                currentCounter = 0;
            } if(j == n - 1)
                water.push_back(currentCounter);
        } sort(water.begin(), water.end());
        if(water[water.size() - 1] >= 3)
            cout << 2 << endl;
        else {
            long long sum = 0;
            for(auto element : water)
                sum += element;
            cout << sum << endl;
        } 
    }
}