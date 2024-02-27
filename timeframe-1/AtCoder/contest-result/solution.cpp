#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int *allProblems = new int[n];
    for(int i = 0; i < n; i++)
        cin >> allProblems[i];
    int *solvedProblems = new int[n];
    for(int i = 0; i < n; i++)
        cin >> solvedProblems[i];
    int score = 0;
    for(int i = 0; i < m; i++)
        score += allProblems[solvedProblems[i] - 1];
    cout << score << '\n';
}