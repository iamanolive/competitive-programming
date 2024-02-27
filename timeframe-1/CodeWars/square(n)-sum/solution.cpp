#include <iostream>
#include <vector>
using namespace std;

int square_sum(const vector<int>& numbers) {
  int result = 0;
  for(int i = 0; i < (int) numbers.size(); i++)
    result += numbers[i] * numbers[i];
  return result;
}