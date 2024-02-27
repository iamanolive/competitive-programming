#include <iostream>
using namespace std;

string solution(string num) {
    for(int i = 0; i < num.length(); i++) {
        if(i < num.length() - 2 && num[i] == '1' && num[i+1] == '4' && num[i+2] == '4') i += 2;
        else if(i < num.length() - 1 && num[i] == '1' && num[i+1] == '4') i += 1;
        else if(num[i] == '1') continue;
        else return "NO";
    } return "YES";
}

int main() {
    string num; cin >> num;
    cout << solution(num) << endl;
}