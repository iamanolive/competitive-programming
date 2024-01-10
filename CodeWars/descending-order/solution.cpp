#include <bits/stdc++.h>
using namespace std;

uint64_t descendingOrder(uint64_t a) {
  string result = to_string(a);
  sort(result.begin(), result.end());
  reverse(result.begin(), result.end());
  return stoul(result);
}