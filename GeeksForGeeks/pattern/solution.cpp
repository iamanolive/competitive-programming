#include <iostream>
using namespace std;

void printDiamond(int n) {
        int stars = 1;
        int spaces = n - 1;
        
        for(int i = 1; i <= n; i++) {
            for(int j = 0; j < spaces; j++)
                cout << " ";
            for(int j = 0; j < stars; j++)
                cout << "* ";
            cout << endl;
            stars++; spaces--;
        } stars--; spaces++;
        for(int i = 1; i <= n; i++) {
            for(int j = 0; j < spaces; j++)
                cout << " ";
            for(int j = 0; j < stars; j++)
                cout << "* ";
            cout << endl;
            stars--; spaces++;
        }
    }