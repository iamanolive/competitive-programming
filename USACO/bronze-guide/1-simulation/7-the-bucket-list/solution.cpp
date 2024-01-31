#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {

    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);

    int n; cin >> n;
    vector<int> buckets;
    int minTime = 0;
    int maxTime = 1000;
    for(int i = 0; i < (n * 3); i++) {
        int val; cin >> val;
        if(i % 3 == 0 || i % 3 == 1) {
            if(val < minTime) minTime = val;
            if(val > maxTime) maxTime = val;
        } buckets.push_back(val);
    } int currentBuckets = 0, maxBuckets = 0;
    for(int i = minTime; i <= maxTime; i++) {
        auto it = find(buckets.begin(), buckets.end(), i);
        if(it != buckets.end()) {
            int pos = it - buckets.begin();
            if(pos % 3 == 0) { // start time, add buckets to current
                currentBuckets += buckets[pos + 2];
                if(currentBuckets > maxBuckets) maxBuckets = currentBuckets;
            } else if(pos % 3 == 1) // end time, subtract buckets from current
                currentBuckets -= buckets[pos + 1];
        }
    } cout << maxBuckets << endl;
}