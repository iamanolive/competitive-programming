#include <string>
using namespace std;

string alphabet_position(const string &text) {
  string result = "";
  for(int i = 0; i < (int) text.length(); i++) {
    if(text[i] >= 65 && text[i] <= 90) result += to_string(int(text[i]) - 64) + " ";
    else if(text[i] >= 97 && text[i] <= 122) result += to_string(int(text[i]) - 96) + " ";
  } int last = result.length() - 1;
  if(result[last] == ' ') result.erase(result.end() - 1);
  return result;
}