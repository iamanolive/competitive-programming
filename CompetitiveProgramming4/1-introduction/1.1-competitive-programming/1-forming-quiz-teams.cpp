#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    vector<pair<int, int>> coordinates;
    for(int i = 0; i < 2 * n; i++) {
        int x, y; cin >> x >> y;
        pair<int, int> temp = {x, y};
        coordinates.push_back(temp);
    } double sum = 0;
    for(int i = 0; i < 2 * n; i++) {
        double minVal = INT_MAX;
        for(int j = 0; j < 2 * n; j++) {
            if(i == j) continue;
            else {
                if(coordinates[i].first == coordinates[j].first)
                    if(abs(coordinates[i].second - coordinates[j].second) < minVal)
                        minVal = abs(coordinates[i].second - coordinates[j].second);
                else if(coordinates[i].second == coordinates[j].second)
                    if(abs(coordinates[i].first - coordinates[j].first) < minVal)
                        minVal = abs(coordinates[i].first - coordinates[j].first);
                else {
                    double value1 = 
                    double value2 = 
                    if(sqrt(value1 + value2) < minVal)
                        minVal = sqrt(value1 + value2);
                }
            }
        } sum += minVal;
    }
}


// given all 2N coordinates, pair the points such that the two that are put together have the smallest possible difference between their x and y coordinates
// loop through all N values and out of the remaining array, find point that is nearest the one on current iteration.