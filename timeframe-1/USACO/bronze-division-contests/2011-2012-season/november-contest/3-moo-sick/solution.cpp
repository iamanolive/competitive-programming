#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int *notes = new int[n];
    for(int i = 0; i < n; i++)
        cin >> notes[i];
    int c; cin >> c;
    int *ruminant = new int[c];
    for(int i = 0; i < n; i++)
        cin >> ruminant[i];
}