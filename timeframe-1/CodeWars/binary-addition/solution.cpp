#include <bits/stdc++.h>
using namespace std;

string add_binary(uint64_t a, uint64_t b) {
  uint64_t sum = a + b;
  string result = "";
  while(sum > 0) {
    result += to_string(sum % 2);
    sum /= 2;
  } reverse(result.begin(), result.end());
  if(result.length() == 0) result = "0";
  return result;
}