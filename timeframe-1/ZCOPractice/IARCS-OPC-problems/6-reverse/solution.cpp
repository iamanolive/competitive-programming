#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<string>> result;
    for(int i = 0; i < n; i++) {
        vector<string> strings;
        string inputString;
        while(cin >> inputString) {
            if(inputString == "\n")
                break;
            for(int j = 0; j < inputString.length(); j++) {
                if(inputString[j] == '.' || inputString[j] == ',' || inputString[j] == ';' || inputString[j] == ':' || inputString[j] == '\'')
                    inputString.erase(j, 1);
            } strings.push_back(inputString);
            inputString = "";
        } result.push_back(strings);
        strings.clear();
    } for(int i = n - 1; i >= 0; i--) {
        for(int j = result[i].size() - 1; j >= 0; j--)
            cout << result[i][j] << " ";
    }
}