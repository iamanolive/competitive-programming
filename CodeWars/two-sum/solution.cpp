#include <bits/stdc++.h>
#include <utility>
using namespace std;

pair<int, int> two_sum(const vector<int>& numbers, int target) {
  pair <int, int> result;
  unordered_map <int, int> indices;
  for(int i = 0; i < (int) numbers.size(); i++) {
    int neededNumber = target - numbers[i];
    if(indices.find(neededNumber) == indices.end())
      indices[numbers[i]] = i;
    else {
      result.first = i;
      result.second = indices.find(neededNumber);
      return result;
    }
  } return result;
}

int main() {
    
}