#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        long long k, d0, d1;
        cin >> k >> d0 >> d1;
        int dCurr = (d0 + d1) % 10;
        long long sum = d0 + d1;
        long long remDigits = k - 2;
        while(remDigits > 0) {
            if(dCurr == 0) break;
            if(dCurr % 10 == 2) {
                if(remDigits % 4 == 0) sum += (remDigits / 4) * 20;
                else if(remDigits % 4 == 1) sum += (remDigits / 4) * 20 + 2;
                else if(remDigits % 4 == 2) sum += (remDigits / 4) * 20 + 6;
                else if(remDigits % 4 == 3) sum += (remDigits / 4) * 20 + 14;
                break;
            } else {
                remDigits--;
                sum += dCurr;
                dCurr = (dCurr * 2) % 10;
            }
        } if(sum % 3 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}