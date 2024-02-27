#include <iostream>
using namespace std;

int main() {
    int a, b, c; char opr, eql;
    cin >> a >> opr >> b >> eql >> c;
    switch(opr) {
        case '+':
            if(a + b == c) cout << "Yes\n";
            else cout << a + b << '\n';
            break;
        case '-':
            if(a - b == c) cout << "Yes\n";
            else cout << a - b << '\n';
            break;
        case '*':
            if(a * b == c) cout << "Yes\n";
            else cout << a * b << '\n';
            break;
    }
}