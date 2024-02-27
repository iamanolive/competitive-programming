#include <string>
using namespace std ; 

string reverseString (string str) {
  string result;
  for(int i = str.size() - 1; i > -1; i--)
    result += str[i];
  return result;
}