#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    int counter = 0;
    for(int i = 0; i < t; i++) {
        string input; cin >> input;
        if(input[0] == '+' || input[1] == '+')
            counter++;
        else counter--;
    } cout << counter << endl;
}