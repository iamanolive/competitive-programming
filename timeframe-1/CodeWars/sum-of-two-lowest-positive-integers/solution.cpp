#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long sumTwoSmallestNumbers(vector<int> numbers) {
  sort(numbers.begin(), numbers.end());
  return (long) numbers[0] + numbers[1];
}