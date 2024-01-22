#include <bits/stdc++.h>
using namespace std;

int main() {
    string input; cin >> input;
    int lower = 0; int upper = 0;
    for(int i = 0; i < input.size(); i++) {
        if(input[i] < 97)
            upper++;
        else
            lower++;
    } if(upper > lower)
        for(int i = 0; i < input.size(); i++)
            input[i] = toupper(input[i]);
    else 
        for(int i = 0; i < input.size(); i++)
            input[i] = tolower(input[i]);
    cout << input << endl;
}