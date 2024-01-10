#include <vector>
#include <algorithm>
using namespace std;

int sum(vector<int> numbers) {
  int sum = 0;
  sort(numbers.begin(), numbers.end());
  for(int i = 1; i < (int) numbers.size() - 1; i++)
    sum += numbers[i];
  return sum;
}