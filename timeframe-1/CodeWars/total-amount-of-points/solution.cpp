#include <iostream>
#include <string>
#include <array>
using namespace std;

int points(const array<string, 10>& games) {
  int points = 0;
  for(int i = 0; i < 10; i++) {
    int t1 = (int) games[i][0];
    int t2 = (int) games[i][2];
    if(t1 > t2) points += 3;
    else if(t1 == t2) points++;
  }
  return points;
}