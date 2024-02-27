#include <iostream>
#include <string>
#include <vector>
using namespace std;

string highAndLow(const string& numbers){
  vector<string> str;
  for(int i = 0; i < (int) numbers.length(); i++) {
    string temp = "";
    while(numbers[i] != ' ' && i < (int) numbers.length()) {
      temp += numbers[i];
      i++;
    } str.push_back(temp);
  } vector<int> resultVec;
  for(auto element : str)
    resultVec.push_back(stoi(element));
  sort(resultVec.begin(), resultVec.end());
  string result = to_string(resultVec[resultVec.size() - 1]) + " " + to_string(resultVec[0]);
  return result;
}