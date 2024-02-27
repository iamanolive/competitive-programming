#include <iostream>
#include <vector>

using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    int s1 = 0, s2 = 0, s3 = 0;
    vector<int> skill1;
    vector<int> skill2;
    vector<int> skill3;
    int *skills = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> skills[i];
        if(skills[i] == 1) {
            s1++;
            skill1.push_back(i + 1);
        } else if(skills[i] == 2) {
            s2++;
            skill2.push_back(i + 1);
        } else if(skills[i] == 3) {
            s3++;
            skill3.push_back(i + 1);
        }
    } cout << min(s1, min(s2, s3)) << endl;
    for(int i = 0; i < min(s1, min(s2, s3)); i++)
        cout << skill1[i] << " " << skill2[i] << " " << skill3[i] << endl;
}