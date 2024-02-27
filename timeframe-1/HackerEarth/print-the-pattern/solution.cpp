#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int number = 1;
    for(int i = 0; i < n; i++) {
        vector<int> currentLine;
        for(int j = 0; j < i+1; j++) {
            currentLine.push_back(number);
            number++;
        } if(i % 2 == 0) {
            reverse(currentLine.begin(), currentLine.end());
            for(auto i : currentLine)
                cout << i << " ";
            cout << endl;
        } else {
            for(auto i : currentLine)
                cout << i << " ";
            cout << endl;
        }
    }
}