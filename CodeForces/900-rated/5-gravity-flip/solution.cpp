#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int col; cin >> col;
    int *cubes = new int[col];
    for(int i = 0; i < col; i++)
        cin >> cubes[i];
    sort(cubes, cubes + col);
    for(int i = 0; i < col; i++)
        cout << cubes[i] << " ";
    cout << endl;
}