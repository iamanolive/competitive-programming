#include <iostream>
using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int n, m; cin >> n >> m;
    int currentDistance = 0;
    int currentIndex = 1;
    int *speedLimit = new int[101];
    for(int i = 0; i < n; i++) {
        int length, limit; cin >> length >> limit;
        for(int j = currentDistance + 1; j <= currentDistance + length; j++)
            speedLimit[j] = limit;
        currentDistance += length;
    } int maxSpeeding = 0;
    int currentLength = 0;
    for(int i = 0; i < m; i++) {
        int len, speed; cin >> len >> speed;
        for(int j = currentLength + 1; j <= currentLength + len; j++)
            if(speed - speedLimit[j] > maxSpeeding)
                maxSpeeding = speed - speedLimit[j];
        currentLength += len;
    } cout << maxSpeeding << endl;
}