#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	for(int i = 0; i < t; i++) {
	    int n; cin >> n;
	    int *A = new int[n];
	    int one = 0, zero = 0;
	    for(int j = 0; j < n; j++) {
	        cin >> A[j];
	        if(A[j] == 1) one++;
	        else if(A[j] == 0) zero++;
	    } if(one <= zero) cout << one << '\n';
	    else cout << zero << '\n';
	}
	return 0;
}