#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string arrangement; cin >> arrangement;
    string result = "Yes";
    for(int i = 0; i < n - 1; i++) {
        if(arrangement[i] == arrangement[i + 1]) result = "No";
        if(result == "No") break;
    } cout << result << '\n';
}