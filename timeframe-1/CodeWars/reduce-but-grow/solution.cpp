#include <iostream>
#include <vector>
using namespace std;

int grow(vector<int> nums) {
  int result = 1;
  int size = nums.size();
  for(int i = 0; i < size; i++)
    result *= nums[i];
  return result;
}