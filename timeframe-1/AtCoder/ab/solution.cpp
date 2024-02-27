#include <iostream>
using namespace std;

int main() {
    int length; cin >> length;
    string s; cin >> s;
    string result = "No";
    for(int i = 0; i < length; i++) {
        if(i == 0 && ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a'))) {
            result = "Yes";
            break;
        } else if(i == (length - 1) && ((s[i] == 'a' && s[i - 1] == 'b') || (s[i] == 'b' && s[i - 1] == 'a'))) {
            result = "Yes";
            break;
        } if(i != 0 && i != (length - 1) && (s[i] == 'a' && (s[i - 1] == 'b' || s[i + 1] == 'b'))) {
            result = "Yes";
            break;
        }
    } cout << result << '\n';
}