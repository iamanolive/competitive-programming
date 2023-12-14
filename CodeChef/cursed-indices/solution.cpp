#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        multiset<long long> arr;
        for(int j = 0; j < n; j++) {
            int val; cin >> val;
            arr.insert(val);
        }
        long long currentSum = 0;
        vector<long long> notCursedElements;
        
        while(true) {
            auto val = arr.upper_bound(currentSum);
            if(val == arr.end()) break;
            currentSum += *val;
            notCursedElements.push_back(*val);
            arr.erase(val);
        } cout << arr.size() << '\n';

        for(int j = 0; j < notCursedElements.size(); j++)
            cout << notCursedElements[j] << " ";
        for(auto it = arr.begin(); it != arr.end(); it++)
            cout << *it << " ";
        cout << endl;
    }
}