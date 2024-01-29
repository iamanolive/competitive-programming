#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        string word; cin >> word;
        string result = "";
        int j = 0;
        while(j < n) {
            if(word[j] != 'a' && word[j] != 'e' && word[j+1] == 'a' || word[j+1] == 'e') {
                result += word[j]; result += word[j+1];
                if(word[j+2] != 'a' && word[j+2] != 'e' && (word[j+3] != 'a' && word[j+3] != 'e')) {
                    result += word[j+2];
                    result += '.';
                    j += 3;
                } else {
                    result += '.';
                    j += 2;
                }
            }
        } for(int j = 0; j < result.length(); j++)
            if(result[j] != 'a' && result[j] != 'b' && result[j] != 'c' && result[j] != 'd' && result[j] != 'e' && result[j] != '.')
                result.erase(j, 1);
        if(result[result.length() - 1] == '.') result.erase(result.length() - 1, 1);
        cout << result << endl;
    }
}