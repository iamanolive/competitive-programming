#include <vector>
#include <algorithm>
using namespace std;

int findOdd(const vector<int>& numbers){
  vector<int> num = numbers;
  sort(num.begin(), num.end());
  int counter = 1;
  int number = num[0];
  for(int i = 1; i < (int) num.size(); i++) {
    if(num[i] == number) counter++;
    else {
      if(counter & 1) return number;
      number = num[i];
      counter = 1;
    }
  } return num[num.size() - 1];
}