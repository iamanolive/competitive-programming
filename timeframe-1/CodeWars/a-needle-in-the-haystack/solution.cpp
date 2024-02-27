#include <vector>
#include <string>
using namespace std;

string findNeedle(const vector<string>& haystack) {
  int position = -1;
  for(int i = 0; i < (int) haystack.size(); i++)
    if(haystack[i] == "needle") position = i;
  return "found the needle at position " + to_string(position);
}

// position as calculated in an array of 0-based indexing