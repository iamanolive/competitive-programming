#include <iostream>
#include <vector>
#include <string>
using namespace std;

string repeat_str(size_t repeat, const string& str) {
  string result = "";
  for(int i = 0; i < repeat; i++)
    result += str;
  return result;
}