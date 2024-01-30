#include <iostream>
using namespace std;

int main() {
    string input; cin >> input;
    for(int i = 0; i < input.size(); i++) {
        if(input[i] == 'W' && input[i+1] == 'U' && input[i+2] == 'B') {
            if(input[i-1] != ' ' && i-1 >= 0) {
                input[i] = ' ';
                input.erase(i+1, 2);
            } else input.erase(i, 3);
            i = -1;
        }
    } cout << input << endl;
}