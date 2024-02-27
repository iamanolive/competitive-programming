#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    int result = -1;
    for(int i = 0; i < s.length(); i++)
        if(s[i] == 'a')
            result = i + 1;
    cout << result << '\n';
}