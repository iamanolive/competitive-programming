#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> nums) {
  double sum = 0;
  for(auto element : nums)
    sum += element;
  return int(sum);
}