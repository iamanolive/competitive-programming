#include <iostream>
#include <map>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    map<string, int> twogram;
    for(int i = 0; i < s.length() - 1; i++) {
        string tmp = "";
        tmp += s[i];
        tmp += s[i+1];
        if(twogram.find(tmp) != twogram.end())
            twogram[tmp]++;
        else twogram[tmp] = 1;
    } int maxValue = 0; string result;
    for(auto [key, value]: twogram) {
        if(value > maxValue) {
            maxValue = value;
            result = key;
        }
    } cout << result << endl;
}