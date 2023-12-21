#include <iostream>
using namespace std;

string solve(int n) {
    int temp = n;
    while(temp > -1) {
        if(temp % 3 == 0 || temp % 7 == 0 || temp % 4 == 0)
            return "YES";
        else
            temp -= 4;
    } temp = n;
    while(temp > -1) {
        if(temp % 3 == 0 || temp % 7 == 0 || temp % 4 == 0)
            return "YES";
        else
            temp -= 3;
    } temp = n;
    while(temp > -1) {
        if(temp % 3 == 0 || temp % 7 == 0 || temp % 4 == 0)
            return "YES";
        else
            temp -= 7;
    } return "NO";
}

int main() {
	int t; cin >> t;
	for(int i = 0; i < t; i++) {
	    int n; cin >> n;
	    cout << solve(n) << '\n';
	}
	return 0;
}