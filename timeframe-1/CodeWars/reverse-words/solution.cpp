#include <bits/stdc++.h>
using namespace std;

string reverse_words(string str) {
  string temp = "";
  string result = "";
  for(int i = 0; i < str.length(); i++) {
    if(str[i] == ' ') {
      reverse(temp.begin(), temp.end());
      result += temp;
      result += ' ';
      temp = "";
    }
    else temp += str[i];
    if(i == str.length() - 1) {
      reverse(temp.begin(), temp.end());
      result += temp;
    }
  } return result;
}