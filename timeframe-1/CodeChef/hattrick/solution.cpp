#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        char *arr = new char[6];
        int consWickets = 0;
        string result = "NO";
        for(int j = 0; j < 6; j++) {
            cin >> arr[j];
            if(arr[j] == 'W')
                consWickets++;
            if(consWickets >= 3)
                result = "YES";
            if(arr[j] != 'W')
                consWickets = 0;
        } cout << result << endl;
    }
}