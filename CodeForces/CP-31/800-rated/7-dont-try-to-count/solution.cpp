#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int len1, len2; cin >> len1 >> len2;
        string str1, str2; cin >> str1 >> str2;
        int counter = 0;
        while(true) {
            int found = str1.find(str2);
            if(found != string::npos) break;
            else if(str1.length() >= 2 * str2.length() && counter > 2) {
                counter = -1;
                break;
            } str1 += str1;
            counter++;
        } cout << counter << endl;
    }
}