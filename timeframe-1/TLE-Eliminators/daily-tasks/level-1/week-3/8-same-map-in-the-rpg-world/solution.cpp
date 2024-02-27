#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int hashA = 0, hashB = 0;
    string *A = new string[n];
    for(int i = 0; i < n; i++) {
        cin >> A[i];
        for(int j = 0; j < m; j++)
            if(A[i][j] == '#')
                hashA++;
    }
    string *B = new string[n];
    for(int i = 0; i < n; i++) {
        cin >> B[i];
        for(int j = 0; j < m; j++)
            if(B[i][j] == '#')
                hashB++;
    } if(hashA != hashB) cout << "No" << endl;
    else {
        int *rowsA = new int[n];
        int *colsA = new int[m];
        for(int i = 0; i < n; i++) {
            int temp = 0;
            for(int j = 0; j < m; j++)
                if(A[i][j] == '#') temp++;
            rowsA[i] = temp;
        } for(int j = 0; j < m; j++) {
            int temp = 0;
            for(int i = 0; i < m; i++)
                if(A[i][j] == '#') temp++;
            colsA[j] = temp;
        }
        int *rowsB = new int[n];
        int *colsB = new int[m];
        for(int i = 0; i < n; i++) {
            int temp = 0;
            for(int j = 0; j < m; j++)
                if(B[i][j] == '#') temp++;
            rowsB[i] = temp;
        } for(int j = 0; j < m; j++) {
            int temp = 0;
            for(int i = 0; i < m; i++)
                if(B[i][j] == '#') temp++;
            colsB[j] = temp;
        } sort(rowsA, rowsA + n);
        sort(rowsB, rowsB + n);
        string result = "Yes";
        for(int i = 0; i < n; i++) {
            if(rowsA[i] != rowsB[i]) {
                result = "No";
                break;
            }
        } if(result == "No") cout << result << endl;
        else {
            sort(colsA, colsA + m);
            sort(colsB, colsB + m);
            for(int i = 0; i < m; i++) {
                if(colsA[i] != colsB[i]) {
                    result = "No";
                    break;
                }
            } cout << result << endl;
        }
    }
}