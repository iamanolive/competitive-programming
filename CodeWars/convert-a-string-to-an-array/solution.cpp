#include <vector>
#include <string>
using namespace std;

vector<string> string_to_array(const string& s) {
  vector<string> result;
  string temp = "";
  for(int i = 0; i < s.length(); i++) {
    if(s[i] != ' ') temp += s[i];
    if(s[i] == ' ' || i == s.length() - 1) {
      result.push_back(temp);
      temp = "";
    }
  } if(result.size() == 0) result.push_back("");
  return result;
}