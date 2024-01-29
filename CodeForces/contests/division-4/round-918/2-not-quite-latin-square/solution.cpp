#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int *count = new int[3];
        for(int j = 0; j < 3; j++)
            count[j] = 0;
        char *line1 = new char[3];
        for(int j = 0; j < 3; j++) {
            cin >> line1[j];
            if(line1[j] == 'A') count[0]++;
            else if(line1[j] == 'B') count[1]++;
            else if(line1[j] == 'C') count[2]++;
        } char *line2 = new char[3];
        for(int j = 0; j < 3; j++) {
            cin >> line2[j];
            if(line2[j] == 'A') count[0]++;
            else if(line2[j] == 'B') count[1]++;
            else if(line2[j] == 'C') count[2]++;
        } char *line3 = new char[3];
        for(int j = 0; j < 3; j++) {
            cin >> line3[j];
            if(line3[j] == 'A') count[0]++;
            else if(line3[j] == 'B') count[1]++;
            else if(line3[j] == 'C') count[2]++;
        } for(int j = 0; j < 3; j++)
            if(count[j] < 3) cout << char(65 + j) << endl;
    }
}