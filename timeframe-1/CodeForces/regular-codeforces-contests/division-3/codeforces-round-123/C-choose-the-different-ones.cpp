#include <iostream>
#include <set>

using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, m, k; cin >> n >> m >> k;

        set<int> setA;
        set<int> setB;
        
        for(int j = 0; j < n; j++) {
            int num; cin >> num;
            setA.insert(num);
        }
        
        for(int j = 0; j < m; j++) {
            int num; cin >> num;
            setB.insert(num);
        }

        bool resultPrinted = false;
        
        set<int> foundTwice;
        set<int> elementFound;
        int countA = 0, countB = 0;

        for(int j = 1; j <= k; j++) {
            if(setA.find(j) == setA.end() && setB.find(j) == setB.end()) {
                cout << "NO" << endl;
                resultPrinted = true;
                break;
            } else if(setA.find(j) != setA.end() && setB.find(j) != setB.end())
                foundTwice.insert(j);
            else if(setA.find(j) != setA.end()) {
                elementFound.insert(j);
                countA++;
            } else if(setB.find(j) != setB.end()) {
                elementFound.insert(j);
                countB++;
            }
        } if(!resultPrinted) {
            if(foundTwice.size() + elementFound.size() != k) cout << "NO" << endl;
            else if(countA > k/2 || countB > k/2) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
}