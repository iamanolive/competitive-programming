#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define endl '\n'

int main() {
    int m; cin >> m;
    vector<int> arrM;
    for(int i = 0; i < m; i++) {
        int val; cin >> val;
        arrM.push_back(val);
    } int n; cin >> n;
    vector<int> arrN;
    for(int i = 0; i < n; i++) {
        int val; cin >> val;
        arrN.push_back(val);
    } vector<int> result;
    for(int i = 0; i < n; i++) {
        int index = arrN[i] - 1;
        result.push_back(arrM[index]);
        arrM.erase(arrM.begin() + index);
    } for(int i = 0; i < n; i++)
        cout << result[i] << endl;
}