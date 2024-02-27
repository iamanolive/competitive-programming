#include <iostream>
using namespace std;

long long base2number(string num) {
    int idx = num.length() - 1;
    int mult = 1;
    long long result = 0;
    while(true) {
        if(idx < 0) return result;
        if(num[idx] == '1')
            result += mult;
        idx--;
        mult *= 2;
    }
}

long long base3number(string num) {
    int idx = num.length() - 1;
    int mult = 1;
    long long result = 0;
    while(true) {
        if(idx < 0) return result;
        if(num[idx] == '1') result += mult;
        else if(num[idx] == '2') result += 2 * mult;
        idx--;
        mult *= 3;
    }
}

long long solution(string base2, string base3) {
    for(int i = 0; i < base2.length(); i++) {
        string b2 = base2;
        string b3 = base3;
        long long n2 = 0, n3 = 0;
        if(base2[i] == '0') b2[i] = '1';
        else if(base2[i] == '1') b2[i] = '0';
        for(int j = 0; j < base3.length(); j++) {
            if(base3[i] == '0') {
                b3[i] = '1';
                n2 = base2number(b2);
                n3 = base3number(b3);
                if(n2 == n3) return n2;
                b3[i] = '2';
                n2 = base2number(b2);
                n3 = base3number(b3);
                if(n2 == n3) return n2;
            } else if(base3[i] == '1') {
                b3[i] = '0';
                n2 = base2number(b2);
                n3 = base3number(b3);
                if(n2 == n3) return n2;
                b3[i] = '2';
                n2 = base2number(b2);
                n3 = base3number(b3);
                if(n2 == n3) return n2;
            } else if(base3[i] == '2') {
                b3[i] = '0';
                n2 = base2number(b2);
                n3 = base3number(b3);
                if(n2 == n3) return n2;
                b3[i] = '1';
                n2 = base2number(b2);
                n3 = base3number(b3);
                if(n2 == n3) return n2;
            }
        }
    }
}

int main() {
    string base2, base3; cin >> base2 >> base3;
    cout << solution(base2, base3) << endl;
}