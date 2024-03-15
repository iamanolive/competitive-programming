#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *stores = new int[n];
        int *price = new int[n];
        int *people = new int[n];
        int max = 0;
        for(int j = 0; j < n; j++) {
            cin >> stores[j] >> people[j] >> price[j];
            if((people[j] / (stores[j] + 1)) * price[j] > max)
                max = (people[j] / (stores[j] + 1)) * price[j];
        } cout << max << endl;
    }
}