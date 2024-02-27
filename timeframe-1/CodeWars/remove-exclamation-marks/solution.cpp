#include <iostream>
#include <string>
using namespace std;

string removeExclamationMarks(string str){
  string result = "";
  for(int i = 0; i < str.length(); i++)
    if(str[i] != '!')
      result += str[i];
  return result;
}