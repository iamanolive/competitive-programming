#include <iostream>
using namespace std;

int main() {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    int c1, m1; cin >> c1 >> m1;
    int c2, m2; cin >> c2 >> m2;
    int c3, m3; cin >> c3 >> m3;

    for(int i = 0; i < 100; i++) {
        if(i % 3 == 0) {
            if(c2 - m2 >= m1) {
                m2 += m1;
                m1 = 0;
            } else {
                m1 -= (c2 - m2);
                m2 = c2;
            }
        }
        else if(i % 3 == 1) {
            if(c3 - m3 >= m2) {
                m3 += m2;
                m2 = 0;
            } else {
                m2 -= (c3 - m3);
                m3 = c3;
            }
        }
        else if(i % 3 == 2) {
            if(c1 - m1 >= m3) {
                m1 += m3;
                m3 = 0;
            } else {
                m3 -= (c1 - m1);
                m1 = c1;
            }
        }
    } cout << m1 << endl << m2 << endl << m3 << endl;
}