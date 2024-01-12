#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

int main() {
    int n, x; cin >> n >> x;
    vector<int> nums;
    for(int i = 1; i <= n; i++)
        if(i % 3 != 0) nums.push_back(i);
    vector<int>::iterator it = find(nums.begin(), nums.end(), x);
    if(it != nums.end())
        cout << (it - nums.begin()) + 1 << endl;
    else
        cout << -1 << endl;
}