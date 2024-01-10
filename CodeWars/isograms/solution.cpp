#include<bits/stdc++.h>
using namespace std;

bool is_isogram(string str) {
  for(int i = 0; i < str.length(); i++)
    str[i] = tolower(str[i]);
  sort(str.begin(), str.end());
  for(int i = 0; i < str.length(); i++) {
    if(i == 0 && str[i] == str[i + 1]) return false;
    if(i == str.length() - 1 && str[i] == str[i - 1]) return false;
    if(str[i] == str[i - 1] || str[i] == str[i + 1]) return false;
  } return true;
}