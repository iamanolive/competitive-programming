#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, m; cin >> n >> m;
        string finalAnswer = "FINE";
        for(int j = 0; j < n; j++) {
            string testcase, result;
            cin >> testcase >> result;
            if(testcase == "correct" && result.find('0') != string::npos)
            finalAnswer = "INVALID";
            else if(testcase == "wrong") {
                bool has0 = false;
                for(int k = 0; k < m; k++) {
                    if(result[k] == '0') {
                        has0 = true;
                        break;
                    }
                } if(!has0 && finalAnswer != "INVALID")
                finalAnswer = "WEAK";
            }
        } cout << finalAnswer << endl;
    }
}