#include <iostream>
using namespace std;

int main() {
    string str; cin >> str;
    string result = "Yes";
    for(int i = 1; i < 17; i++) {
        if(i % 2 == 0 && str[i-1] != '0') {
            result = "No";
            break;
        }
    } cout << result << '\n';
}