#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> result;
    for(int i = 0; i < n - 1; i++) {
        if(abs(arr[i] - arr[i + 1]) != 1) {
            if(arr[i] < arr[i + 1])
                for(int j = arr[i]; j <= arr[i + 1]; j++)
                    result.push_back(j);
            else if(arr[i] > arr[i + 1]) {
                for(int j = arr[i]; j >= arr[i + 1] + 1; j--)
                    result.push_back(j);
                result.push_back(arr[i + 1]);
            }
        } else result.push_back(arr[i]);
    } result.push_back(arr[n - 1]);
    for(int i = 0; i < result.size() - 1; i++)
        if(result[i] == result[i + 1])
            result.erase(result.begin() + i + 1);
    for(int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
}