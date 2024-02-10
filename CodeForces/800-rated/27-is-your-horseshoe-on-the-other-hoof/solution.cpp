#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
#define endl '\n'

int main() {
    vector<int> shoes;
    for(int i = 0; i < 4; i++) {
        int shoe; cin >> shoe;
        shoes.push_back(shoe);
    } sort(shoes.begin(), shoes.end());
    for(int i = 1; i < shoes.size(); i++) {
        if(shoes[i] == shoes[i-1]) {
            shoes.erase(shoes.begin() + i);
            i = 0;
        }
    } cout << 4 - shoes.size() << endl;
}