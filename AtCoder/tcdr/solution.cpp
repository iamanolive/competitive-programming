#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    string result = "";
    int length = s.length();
    for(int i = 0; i < length; i++)
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            result += s[i];
    cout << result << '\n';
}