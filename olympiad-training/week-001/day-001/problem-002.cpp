#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        string num; cin >> num;
        string result = "";
        for(int j = num.length() - 1; j >= 0; j--) {
            if(result == "" && num[j] == '0') continue;
            else result += num[j];
        } cout << result << endl;
    }
}