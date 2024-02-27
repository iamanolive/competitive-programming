#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int *scores = new int[n];
    for(int i = 0; i < n; i++)
        cin >> scores[i];
    int num = scores[k - 1];
    int counter = 0;
    for(int i = 0; i < n; i++)
        if(scores[i] >= num && scores[i] > 0)
            counter++;
    cout << counter << endl;
}