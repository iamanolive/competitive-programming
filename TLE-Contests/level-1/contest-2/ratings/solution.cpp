#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int counter = 0;
        int number = 2;
        vector<int> result;
        while(true) {
            if(counter == n)
                break;
            else if(counter == 0)
                result.push_back(number);
            else if(number % result.back() != 0 && number > result.back())
                result.push_back(number);
            number++; counter++;
        } for(auto element : result)
            cout << element << " ";
        cout << endl;
    }
}