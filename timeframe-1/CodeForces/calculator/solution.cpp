#include <bits/stdc++.h>
using namespace std;

int main() {
    string expression; cin >> expression;
    string num1 = ""; string num2 = ""; char opr;
    int index = 0;
    while(expression[index] != '+' && expression[index] != '-' && expression[index] != '*' && expression[index] != '/') {
        num1 += expression[index];
        index++;
    } opr = expression[index]; index++;
    for(int i = index; i < expression.length(); i++)
        num2 += expression[i];
    int n1 = stoi(num1);
    int n2 = stoi(num2);
    switch (opr) {
        case '+':
            cout << n1 + n2 << '\n';
            break;
        case '-':
            cout << n1 - n2 << '\n';
            break;
        case '*':
            cout << n1 * n2 << '\n';
            break;
        case '/':
            cout << n1 / n2 << '\n';
            break;
    }
}