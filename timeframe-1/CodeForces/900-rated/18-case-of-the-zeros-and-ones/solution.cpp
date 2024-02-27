#include <iostream>
#include <algorithm>
using namespace std;

int solution(string binary) {
    int zeroCount = 0;
    int oneCount = 0;
    for(int i = 0; i < binary.length(); i++) {
        if(binary[i] == '0') zeroCount++;
        else if(binary[i] == '1') oneCount++;
    } return binary.length() - (2 * min(zeroCount, oneCount));

}

int main() {
    int n; cin >> n;
    string binary; cin >> binary;
    cout << solution(binary) << endl;
}