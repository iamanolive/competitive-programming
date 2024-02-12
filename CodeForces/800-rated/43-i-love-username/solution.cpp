#include <iostream>
#include <climits>

using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    int *points = new int[n];
    int minPoints = INT_MAX;
    int maxPoints = -1;
    int result = 0;
    for(int i = 0; i < n; i++) {
        cin >> points[i];
        if(i > 0) {
            if(points[i] > maxPoints) result++;
            if(points[i] < minPoints) result++;
        } if(points[i] < minPoints) minPoints = points[i];
        if(points[i] > maxPoints) maxPoints = points[i];
    } cout << result << endl;
}