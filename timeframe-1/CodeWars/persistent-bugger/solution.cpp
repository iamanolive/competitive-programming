#include <bits/stdc++.h>
using namespace std;

int persistence(long long n) {
  string num = to_string(n);
  long long multDigits = 1;
  int result = 0;
  if(num.length() == 1) return result;
  while(true) {
    for(int i = 0; i < num.length(); i++)
      multDigits *= int(num[i]) - 48;
    result++;
    if(multDigits / 10 == 0)
      return result;
    else {
      num = to_string(multDigits);
      multDigits = 1;
    }
  } return result;
}