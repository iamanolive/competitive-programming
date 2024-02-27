#include <bits/stdc++.h>
using namespace std;

int find_short(string str) {
  int shortestLength = INT_MAX;
  int currentLength = 0;
  for(int i = 0; i < (int) str.length(); i++) {
    if(str[i] == ' ') {
      if(currentLength < shortestLength)
        shortestLength = currentLength;
      currentLength = 0;
    } else
      currentLength++;
  } return min(currentLength, shortestLength);
}