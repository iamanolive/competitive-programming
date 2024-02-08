#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int *people = new int[n];
    int *capacity = new int[n];
    int counter = 0;
    for(int i = 0; i < n; i++) {
        cin >> people[i] >> capacity[i];
        if(capacity[i] - people[i] >= 2)
            counter++;
    } cout << counter << endl;
}