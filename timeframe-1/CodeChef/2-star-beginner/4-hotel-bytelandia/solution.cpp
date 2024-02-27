#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *arrival = new int[n];
        for(int j = 0; j < n; j++)
            cin >> arrival[j];
        int *departure = new int[n];
        for(int j = 0; j < n; j++)
            cin >> departure[j];
            
        int maxCount = 0;
            
        for(int j = 1; j <= 1000; j++) {
            int currentCount = 0;
            for(int k = 0; k < n; k++)
                if(arrival[k] < j && departure[k] >= j)
                    currentCount++;
            if(currentCount > maxCount) maxCount = currentCount;
        } cout << maxCount << endl;
    }
}