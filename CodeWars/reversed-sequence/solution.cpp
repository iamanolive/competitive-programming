#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseSeq(int n) {
  vector<int> result;
  for(int i = n; i > 0; i--)
    result.push_back(i);
  return result;
}