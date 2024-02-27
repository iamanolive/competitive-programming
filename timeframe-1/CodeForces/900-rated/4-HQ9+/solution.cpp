#include <iostream>
using namespace std;

string program(string input) {
    for(int i = 0; i < input.length(); i++)
        if(input[i] == 'H' || input[i] == 'Q' || input[i] == '9')
            return "YES";
        return "NO";  
}

int main() {
    string p; cin >> p;
    cout << program(p) << endl;
}