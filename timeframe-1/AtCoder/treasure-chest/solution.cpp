#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    bool beforeStar = false;
    bool afterStar = false;
    bool starFound = false;
    for(int i = 0; i < n; i++) {
        if(s[i] == '|' && starFound == false) beforeStar = true;
        else if(s[i] == '|' && starFound) afterStar = true;
        else if(s[i] == '*') starFound = true;
    } if(beforeStar && afterStar) cout << "in\n";
    else cout << "out\n";
    
}