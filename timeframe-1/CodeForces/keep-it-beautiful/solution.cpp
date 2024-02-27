#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        int *arr = new int[n];
        for(int j = 0; j < n; j++)  
            cin >> arr[j];
        bool smallerNumFound = false;
        int prevElement = arr[0];
        int firstElement = arr[0];
        string result = "";
        for(int j = 0; j < n; j++) {
            if(arr[j] < prevElement && !smallerNumFound && arr[j] <= firstElement) {
                smallerNumFound = true;
                prevElement = arr[j];
                result += "1";
            } else if(!smallerNumFound && arr[j] >= prevElement) {
                prevElement = arr[j];
                result += "1";
            } else if(smallerNumFound && arr[j] >= prevElement && arr[j] <= firstElement) {
                prevElement = arr[j];
                result += "1";
            } else 
                result += "0";
        } cout << result << '\n';
    }
}