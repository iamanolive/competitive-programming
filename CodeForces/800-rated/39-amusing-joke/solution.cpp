#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

int main() {
    string name1, name2, jumbled;
    cin >> name1 >> name2 >> jumbled;
    string original = name1 + name2;
    if(original.length() != jumbled.length()) cout << "NO" << endl;
    else {
        sort(original.begin(), original.end());
        sort(jumbled.begin(), jumbled.end());
        string result = "YES";
        for(int i = 0; i < jumbled.length(); i++) {
            if(original[i] != jumbled[i]) {
                result = "NO";
                break;
            }
        } cout << result << endl;
    }
}