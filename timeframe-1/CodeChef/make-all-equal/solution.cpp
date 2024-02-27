#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int t; cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, m; cin >> n >> m;
	    int *arr = new int[n];
	    for(int j = 0; j < n; j++)
	        cin >> arr[j];
	    sort(arr, arr + n);
	    int largestNum = arr[n-1];
	    long long counter = 0;
	    for(int j = 0; j < n; j++)
	        counter += largestNum - arr[j];
	    if(counter % m == 0) cout << max((long long) largestNum - arr[0], counter/m) << '\n';
	    else cout << max((long long)largestNum - arr[0], counter/m + 1) << '\n';
	}
}