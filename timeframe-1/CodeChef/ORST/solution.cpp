#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, m; cin >> n >> m;
        int *A = new int[n];
        for(int j = 0; j < n; j++)
            cin >> A[j];
        int maxB = -1;
        int *B = new int[m];
        for(int j = 0; j < m; j++) {
            cin >> B[j];
            if(B[j] > maxB) maxB = B[j];
        }
        
        vector<int> toSort;
        for(int j = n - 1; j >= n - maxB; j--)
            toSort.push_back(A[j]);
        sort(toSort.begin(), toSort.end());
        for(int j = 0; j < n - maxB; j++)
            cout << A[j] << " ";
        for(auto element : toSort)
            cout << element << " ";
        cout << endl;
    }
}