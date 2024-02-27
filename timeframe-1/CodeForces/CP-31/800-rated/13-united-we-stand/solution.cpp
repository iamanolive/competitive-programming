#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *A = new int[n];
        for(int j = 0; j < n; j++)
            cin >> A[j];
        sort(A, A + n);
        if(A[0] == A[n - 1])
            cout << -1 << endl;
        else {
            vector<int> B;
            vector<int> C;
            for(int j = n - 1; j > 0; j--) {
                if(A[j] == A[n-1]) C.push_back(A[j]);
                else break; 
            } for(int j = 0; j < n; j++) {
                if(A[j] < A[n - 1])
                    B.push_back(A[j]);
                else break;
            } cout << B.size() << " " << C.size() << endl;
            for(int j = 0; j < B.size(); j++)
                cout << B[j] << " ";
            cout << endl;
            for(int j = 0; j < C.size(); j++)
                cout << C[j] << " ";
            cout << endl;
        }
    }
}