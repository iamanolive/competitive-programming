#include <iostream>
#include <string>
using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    
    string *grid = new string[n];
    string *result = new string[n];
    
    for(int i = 0; i < n; i++) {
        cin >> grid[i];
        result[i] = grid[i];
    }
    
    for(int j = 1; j < n; j++)
        result[0][j] = grid[0][j-1];
    for(int j = 0; j < n - 1; j++)
        result[n-1][j] = grid[n-1][j+1];
    for(int i = 0; i < n - 1; i++)
        result[i][0] = grid[i+1][0];
    for(int i = 1; i < n; i++)
        result[i][n-1] = grid[i-1][n-1];
    
    for(int i = 0; i < n; i++)
        cout << result[i] << endl;
}