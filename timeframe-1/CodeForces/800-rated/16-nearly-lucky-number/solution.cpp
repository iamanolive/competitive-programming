#include <iostream>
using namespace std;

int main() {
    string n; cin >> n;
    int counter = 0;
    for(int i = 0; i < n.length(); i++)
        if(n[i] == '4' || n[i] == '7')
            counter++;
    string result = to_string(counter);
    string printThis = "YES";
    for(int i = 0; i < result.length(); i++) {
        if(result[i] != '4' && result[i] != '7') {
            printThis = "NO";
            break;
        }
    } cout << printThis << endl;
}