#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        string s; cin >> s;
        string firstHalf = "";
        string secondHalf = "";
        for(int j = 0; j < s.length() / 2; j++)
            firstHalf += s[j];
        for(int j = (s.length() + 1) / 2; j < s.length(); j++)
            secondHalf += s[j];
        sort(firstHalf.begin(), firstHalf.end());
        sort(secondHalf.begin(), secondHalf.end());
        (firstHalf == secondHalf) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}