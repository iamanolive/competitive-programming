#include <iostream>
using namespace std;

int main() {
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);
    string cometName, groupName;
    cin >> cometName >> groupName;
    long long cometProduct = 1, groupProduct = 1;
    for(int i = 0; i < cometName.length(); i++) {
        if(cometName[i] >= 65 && cometName[i] <= 90)
            cometProduct *= ((long long) cometName[i] - 64) % 47;
    }
    for(int i = 0; i < groupName.length(); i++) {
        if(groupName[i] >= 65 && groupName[i] <= 90)
        groupProduct *= ((long long) groupName[i] - 64) % 47;
    }
    (cometProduct % 47 == groupProduct % 47) ? cout << "GO\n" : cout << "STAY\n";
}