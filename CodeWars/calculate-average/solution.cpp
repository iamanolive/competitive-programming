#include <iostream>
#include <vector>
using namespace std;

double calcAverage(const vector<int>& values) {
  double sum = 0;
  for(auto element : values)
    sum += (double)element;
  return sum / values.size();
}