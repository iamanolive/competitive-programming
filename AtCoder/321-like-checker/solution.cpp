#include <iostream>
using namespace std;

int main() {
    string number; cin >> number;
    int length = number.length();
    string result = "Yes";
    for(int i = 0; i < (length - 1); i++) {
        if(number[i] <= number[i + 1]) {
            result = "No";
            break;
        }
    } cout << result << '\n';
}