#include <iostream>
#include <string>
using namespace std;

string fakeBin(string str) {
  string result = "";
  for(int i = 0; i < str.length(); i++) {
    int val = int(str[i]) - int('0');
    if(val < 5) result += '0';
    else result += '1';
  } return result;
}