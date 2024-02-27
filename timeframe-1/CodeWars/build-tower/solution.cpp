#include <bits/stdc++.h>
using namespace std;

vector<string> towerBuilder(unsigned nFloors) {
    vector<string> result;
    int k1 = nFloors - 1;
    int k2 = 1;
    for(int i = 0; i < nFloors; i++) {
        string temp = "";
        for(int j = 0; j < (2 * nFloors) - 1; j++) {
            if(j >= k1 && j < k1 + k2) temp += '*';
            else temp += ' ';
        } result.push_back(temp); k2 += 2; k1--;
    } return result;
}