#include <iostream>
#include <vector>
using namespace std;

vector<unsigned int> removeSmallest(const vector<unsigned int>& numbers) {
  int size = numbers.size();
  unsigned int lowestValue = 4294967295;
  unsigned int lowestValueIndex = -1;
  for(int i = 0; i < size; i++) {
    if(numbers[i] < lowestValue) {
      lowestValue = numbers[i];
      lowestValueIndex = i;
    }
  } vector<unsigned int> result;
  for(int i = 0; i < size; i++)
    if(i != lowestValueIndex)
      result.push_back(numbers[i]);
  return result;
}