#include <iostream>
using namespace std;

void line1(int count) {
    cout << "..";
    for(int i = 0; i < count - 1; i++) {
        if((i + 1) % 3 == 0) cout << "*..."; 
        else cout << "#...";
    } if(count % 3 == 0) cout << "*.." << endl;
    else cout << "#.." << endl;
}

void line2(int count) {
    for(int i = 0; i < count; i++) {
        if((i + 1) % 3 == 0) cout << ".*.*";
        else cout << ".#.#";
    } cout << "." << endl;
}

void line3(int count, string letters) {
    for(int i = 0; i < count; i++) {
        if((i + 1) % 3 == 0 ||(i % 3 == 0 && i > 2)) cout << "*." << letters[i] << ".";
        else cout << "#." << letters[i] << ".";
    } if(count % 3 == 0) cout << "*" << endl;
    else cout << "#" << endl;
}

int main() {
    string letters; cin >> letters;
    int count = letters.length();

    if(count > 0) {
        line1(count); // line 1
        line2(count); // line 2

        line3(count, letters); // line 3

        line2(count); // line 4
        line1(count); // line 5
    }
}