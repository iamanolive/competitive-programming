#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int emma, lucia, store;
        cin >> emma >> lucia >> store;
        if(store <= emma && store >= lucia)
            cout << "YES" << endl;
        else if(store >= emma && store <= lucia)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}