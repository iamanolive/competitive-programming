#include <iostream>
using namespace std;

string solution(string s) {
    int counter0 = 0, counter1 = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '0') counter0++;
        else if(s[i] == '1') counter1++;
    } if(min(counter0, counter1) % 2 == 0) return "NET";
    else return "DA";
}

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        string s; cin >> s;
        cout << solution(s) << endl;
    }
}