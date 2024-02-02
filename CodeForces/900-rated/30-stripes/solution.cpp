#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        char color = 'O';
        string *stripe = new string[8];
        for(int j = 0; j < 8; j++)
            cin >> stripe[j];
        for(int j = 0; j < 8; j++) {
            for(int k = 0; k < 8; k++) {
                 if(stripe[j][k] != '.') {
                    // j == 0 and k == 0
                    if(j == 0 && k == 0) {
                        if(stripe[j][k] == 'B' && ((stripe[j][k+1] == 'R' && stripe[j][k+2] == 'R') || (stripe[j+1][k] == 'R' && stripe[j+2][k] == 'R'))) {
                            color = 'B';
                            break;
                        }
                        else if(stripe[j][k] == 'R' && ((stripe[j][k+1] == 'B' && stripe[j][k+2] == 'B') || (stripe[j+1][k] == 'B' && stripe[j+2][k] == 'B'))) {
                            color = 'R';
                            break;
                        }
                    }
                    // j == 7 and k == 0
                    else if(j == 7 && k == 0) {
                        if(stripe[j][k] == 'B' && ((stripe[j][k+1] == 'R' && stripe[j][k+2] == 'R') || (stripe[j-1][k] == 'R' && stripe[j-2][k] == 'R'))) {
                            color = 'B';
                            break;
                        }
                        else if(stripe[j][k] == 'R' && ((stripe[j][k+1] == 'B' && stripe[j][k+2] == 'B') || (stripe[j-1][k] == 'B' && stripe[j-2][k] == 'B'))) {
                            color = 'R';
                            break;
                        }
                    }
                    // k == 0 and j != 0 and j != 7
                    else if(k == 0 && j != 0 && j != 7) {
                        if(stripe[j][k] == 'B' && ((stripe[j+1][k] == 'R' && stripe[j-1][k] == 'R') || (stripe[j][k+1] == 'R' && stripe[j][k+2] == 'R'))) {
                            color = 'B';
                            break;
                        }
                        else if(stripe[j][k] == 'R' && ((stripe[j+1][k] == 'B' && stripe[j-1][k] == 'B') || (stripe[j][k+1] == 'B' && stripe[j][k+2] == 'B'))) {
                            color = 'R';
                            break;
                        } 
                    }

                    // j == 0 and k == 7
                    else if(j == 0 && k == 7) {
                        if(stripe[j][k] == 'B' && ((stripe[j][k-1] == 'R' && stripe[j][k-2] == 'R') || (stripe[j+1][k] == 'R' && stripe[j+2][k] == 'R'))) {
                            color = 'B';
                            break;
                        }
                        else if(stripe[j][k] == 'R' && ((stripe[j][k-1] == 'B' && stripe[j][k-2] == 'B') || (stripe[j+1][k] == 'B' && stripe[j+2][k] == 'B'))) {
                            color = 'R';
                            break;
                        }
                    }
                    // j == 7 and k == 7
                    else if(j == 7 && k == 7) {
                        if(stripe[j][k] == 'B' && ((stripe[j][k-1] == 'R' && stripe[j][k-2] == 'R') || (stripe[j-1][k] == 'R' && stripe[j-2][k] == 'R'))) {
                            color = 'B';
                            break;
                        }
                        else if(stripe[j][k] == 'R' && ((stripe[j][k-1] == 'B' && stripe[j][k-2] == 'B') || (stripe[j-1][k] == 'B' && stripe[j-2][k] == 'B'))) {
                            color = 'R';
                            break;
                        }
                    }
                    // k == 7 and j != 0 and j != 7
                    else if(k == 7 && j != 0 && j != 7) {
                        if(stripe[j][k] == 'B' && ((stripe[j][k-1] == 'R' && stripe[j][k-2] == 'R') || (stripe[j+1][k] == 'R' && stripe[j-1][k] == 'R'))) {
                            color = 'B';
                            break;
                        }
                        else if(stripe[j][k] == 'R' && ((stripe[j][k-1] == 'B' && stripe[j][k-2] == 'B') || (stripe[j+1][k] == 'B' && stripe[j-1][k] == 'B'))) {
                            color = 'R';
                            break;
                        }
                    }

                    // char is not on rectangle boundary
                    else {
                        if(stripe[j][k] == 'B' && ((stripe[j+1][k] == 'R' && stripe[j-1][k] == 'R') || (stripe[j][k+1] == 'R' && stripe[j][k-1] == 'R'))) {
                            color = 'B';
                            break;
                        }
                        else if(stripe[j][k] == 'R' && ((stripe[j+1][k] == 'B' && stripe[j-1][k] == 'B') || (stripe[j][k+1] == 'B' && stripe[j][k-1] == 'B'))) {
                            color = 'R';
                            break;
                        }
                    }
                }
            }
        } cout << color << endl;
    }
}