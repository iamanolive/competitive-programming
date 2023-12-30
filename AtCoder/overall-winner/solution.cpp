#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string result; cin >> result;
    int tCounter = 0;
    int aCounter = 0;
    for(int i = 0; i < n; i++) {
        if(result[i] == 'T') tCounter++;
        else if(result[i] == 'A') aCounter++;
    } if(aCounter > tCounter) cout << 'A';
    else if(tCounter > aCounter) cout << 'T';
    else {
        if(result[n-1] == 'T') cout << 'A';
        else cout << 'T';
    }
}