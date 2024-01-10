#include <bits/stdc++.h>
using namespace std;

int stray(vector<int> numbers) {
  sort(numbers.begin(), numbers.end());
  for(int i = 0; i < numbers.size(); i++) {
    if(i == 0 && numbers[i] != numbers[i + 1]) return numbers[i];
    if(i == numbers.size() - 1 && numbers[i] != numbers[i - 1]) return numbers[i];
    if(numbers[i] != numbers[i - 1] && numbers[i] != numbers[i + 1]) return numbers[i];
  } return -1;
}