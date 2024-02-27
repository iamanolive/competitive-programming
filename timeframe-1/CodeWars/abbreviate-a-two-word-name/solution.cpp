#include <bits/stdc++.h>
using namespace std;

string abbrevName(string name) {
  string result("");
  result.push_back(toupper(name[0]));
  result.push_back('.');
  int i = 1;
  while(name[i] != ' ') i++;
  result.push_back(toupper(name[i + 1]));
  return result;
}