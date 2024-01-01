#include <iostream>
using namespace std;

int main() {
    string alphabets; cin >> alphabets;
    int length = alphabets.length();
    for(int i = 0; i < length; i++) {
        if(alphabets[i] >= 65 && alphabets[i] <= 90) {
            cout << i + 1 << '\n';
            break;
        }
    }
}