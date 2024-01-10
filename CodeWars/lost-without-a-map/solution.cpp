#include <iostream>
#include <vector>
using namespace std;

vector<int> maps(const vector<int> & values) {
  vector<int> result;
  for(int i = 0; i < (int) values.size(); i++)
    result.push_back(2 * values[i]);
  return result;
}