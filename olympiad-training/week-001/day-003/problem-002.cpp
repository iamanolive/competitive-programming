#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        string sequence; cin >> sequence;
        int sign1 = 0, sign2 = 0;
        int longestPrefix = 0;
        for(int j = 0; j < sequence.length(); j++) {
            if(sequence[j] == '<') sign1++;
            else if(sequence[j] == '>') sign2++;
            if(sign1 == sign2) longestPrefix = j + 1;
            else if(sign2 > sign1) break;
        } cout << longestPrefix << endl;
    }
}