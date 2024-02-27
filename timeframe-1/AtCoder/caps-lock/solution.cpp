#include <iostream>
using namespace std;

int main() {
    string alphabets; cin >> alphabets;
    for(int i = 0; i < alphabets.size(); i++) 
        alphabets[i] = char(alphabets[i] - 32);
    cout << alphabets << '\n';
}