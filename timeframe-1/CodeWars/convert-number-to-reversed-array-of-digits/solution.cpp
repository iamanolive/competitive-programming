#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> digitize(unsigned long n) 
{
  vector<int> result;
  string num = to_string(n);
  for(int i = num.length() - 1; i > -1; i--)
    result.push_back(int(num[i]) - int('0'));
  return result;
}