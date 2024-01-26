#include <bits/stdc++.h>
using namespace std;

long long numberbase2(string base) {

}

long long numberbase3(string base) {

}

int main() {
    string base2, base3;
    cin >> base2 >> base3;
    if(numberbase2(base2) == numberbase3(base3))
        cout << numberbase2 << endl;
    else {
        for(int i = 0; i < base2.length(); i++) {
            string temp2 = base2;
            if(temp2[i] == '0') temp2[i] = '1';
            else if(temp2[i] == '1') temp2[i] = '0'; 
            for(int j = 0; j < base3.length(); j++) {
                for(int k = 0; k < 3; k++) {
                    
                }
            }
        }
    }
}