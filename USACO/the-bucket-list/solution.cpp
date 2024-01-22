#include <iostream>
using namespace std;

int main() {

    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);

    int n; cin >> n;
    int *startTime = new int[n];
    int *endTime = new int[n];
    int *buckets = new int[n];
    int maxTime = 0;
    for(int i = 0; i < n; i++) {
        cin >> startTime[i] >> endTime[i] >> buckets[i];
        if(endTime[i] > maxTime)
            maxTime = endTime[i];
    } int current = 0;
    for(int i = 0; i < n; i++) {
    }
}