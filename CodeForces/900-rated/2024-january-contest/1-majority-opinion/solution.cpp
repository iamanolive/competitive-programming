#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *hay = new int[n];
        for(int j = 0; j < n; j++)
            cin >> hay[j];
        vector<int> result;
        for(int i1 = 0; i1 < n; i1++) { // i1 = 0
            int idx = 2;
            int current = hay[i1]; // 1
            int counter = 0;
            for(int i2 = 1; i2 < n - i1; i2++) {
                counter = 0;
                for(int i3 = i1; i3 < i1 + i2 + 1; i3++) {
                    if(hay[i3] == current) counter++; // 1 2 
                } if(counter > (idx / 2)) result.push_back(current);
                idx++;
            }
        } if(result.size() == 0) cout << -1 << endl;
        else {
            sort(result.begin(), result.end());
            for(int j = 1; j < result.size(); j++) {
                if(result[j] == result[j-1]) {
                    result.erase(result.begin() + j);
                    j--;
                }
            }
            for(int j = 0; j < result.size(); j++) {
                if(j == result.size() - 1) cout << result[j];
                else cout << result[j] << " ";
            }
            cout << endl;
        }
    }
}