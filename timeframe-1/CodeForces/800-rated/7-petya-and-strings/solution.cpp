#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    int result = 0;
    for(int i = 0; i < str1.length(); i++) {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
        if(str1[i] < str2[i]) {
            result = -1;
            break;
        } else if(str1[i] > str2[i]) {
            result = 1;
            break;
        }
    } cout << result << endl;
}