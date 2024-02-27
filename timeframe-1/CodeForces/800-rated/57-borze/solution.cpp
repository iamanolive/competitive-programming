#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    string code; cin >> code;
    string result = "";
    for(int i = 0; i < code.length(); i++) {
        if(code[i] == '.') result += '0';
        else if(code[i] == '-' && code[i + 1] == '-') {
            result += '2';
            i += 1;
        } else if(code[i] == '-' && code[i + 1] == '.') {
            result += '1';
            i += 1;
        }
    } cout << result << endl;
}