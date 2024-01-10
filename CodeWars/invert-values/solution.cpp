#include <vector>
using namespace std;

vector<int> invert(vector<int> values) {
  vector<int> result;
  for(int i = 0; i < values.size(); i++) {
    if(values[i] != 0) result.push_back(values[i] * -1);
    else result.push_back(0);
  } return result;
}