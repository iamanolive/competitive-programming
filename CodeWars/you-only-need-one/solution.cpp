#include <vector>
#include <string>
using namespace std;

bool check(const vector<string>& seq, const string& elem) {
  for(int i = 0; i < (int) seq.size(); i++)
    if(seq[i] == elem) return true;
  return false;
}