#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        string str; cin >> str;
        int size = str.length();
        sort(str.begin(), str.end());
        string result = "Yes";
        for(int j = str[0]; j < str[0] + size; j++) {
            if(str[j - str[0]] != j) {
                result = "No";
                break;
            }
        } cout << result << endl;
    }
}