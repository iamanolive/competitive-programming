#include <iostream>
#include <vector>
using namespace std;

int positive_sum (const vector<int> arr){
  int sum = 0;
  for(auto element : arr)
    if(element > 0) sum += element;
  return sum;
}