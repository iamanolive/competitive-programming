#include <iostream>
#include <stack>
using namespace std;

int precedence(int opr) {
    if(opr == '+' || opr == '-')
        return 1;
    else if(opr == '/' || opr == '*')
        return 2;
    else if(opr == '^')
        return 3;
    else return -1;
}

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        string s; cin >> s;
        stack<char> stk;
        for(int j = 0; j < n; j++) {
            if(s[j] == '(')
                stk.push(s[j]);
            else if(s[j] == ')') {
                while(!stk.empty() && stk.top() != '(') {
                    cout << stk.top();
                    stk.pop();
                } if(stk.top() == '(')
                    stk.pop();
            } else if(s[j] >= 'A' && s[j] <= 'Z')
                cout << s[j];
            else {
                while(!stk.empty() && precedence(s[j]) <= precedence(stk.top())) {
                    if(stk.top() == '(')
                        stk.pop();
                    else {
                        cout << stk.top();
                        stk.pop();
                    }
                } stk.push(s[j]);
            }
        } while(!stk.empty()) {
            if(stk.top() != '(')
                cout << stk.top();
            stk.pop();
        } cout << endl;
    }
}