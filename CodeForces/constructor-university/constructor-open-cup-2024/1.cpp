// temp >= l and temp <= r
// initial temp = k
// checks from 0 to a[n] mins
// if temp is between l and r -> drinks water
// if temp > r -> starts cooling (decreases by 1 degree per min)
// if temp < l -> starts heating (increases by 1 degree per min)
// time when alice drinks the water

#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, l, r, k; cin >> n >> l >> r >> k;
        int *times = new int[n];
        for(int j = 0; j < n; j++)
            cin >> times[j];
        if(k >= l && k <= r) cout << 0 << endl;
        else if(k < l) {
            // heat the water
            int currentTime = 0;
            int idx = 0;
            while(true) {
                if(k >= l && currentTime == times[idx]) break;
                if(currentTime == times[idx]) idx++;
                k++; currentTime++;
            } if(k >= l && k <= r) cout << times[idx] << endl;
            else cout << -1 << endl;
        } else if(k > r) {
            // cool the water
            int currentTime = 0;
            int idx = 0;
            while(true) {
                if(k <= r && currentTime == times[idx]) break;
                if(currentTime == times[idx]) idx++;
                k--; currentTime++;
            } if(k <= r && k >= l) cout << times[idx] << endl;
            else cout << -1 << endl;
        }
    }
}