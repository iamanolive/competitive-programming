#include <iostream>
#include <set>

using namespace std;
#define endl '\n'

int main() {
    string s; getline(cin, s);
    set<char> result;
    for(int i = 0; i < s.length(); i++) {
        char x = s[i];
        if(x != ' ' && x != ',' && x != '{' && x != '}')
            result.insert(x);
    } cout << result.size() << endl;
}