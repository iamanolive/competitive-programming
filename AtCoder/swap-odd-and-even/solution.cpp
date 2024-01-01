#include <iostream>
using namespace std;

int main() {
    string sequence; cin >> sequence;
    int length = sequence.length();
    for(int i = 0; i < length - 1; i++) {
        swap(sequence[i], sequence[i + 1]);
        i++;
    } cout << sequence << '\n';
}