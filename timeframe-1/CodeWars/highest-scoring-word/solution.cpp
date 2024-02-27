#include <string>
#include <vector>
using namespace std;

string highestScoringWord(const string &str) {
  
  vector<string> words;
  string tempWord = "";
  
  for(int i = 0; i < (int) str.length(); i++) {
    if(str[i] == ' ') {
      words.push_back(tempWord);
      tempWord = "";
    } else tempWord += str[i];
    if(i == str.length() - 1)
      words.push_back(tempWord);
  }
  
  int maxSize = 0;
  string maxString = "";
  
  vector<int> wordSize;
  for(int i = 0; i < (int) words.size(); i++) {
    int currentSize = 0;
    for(int j = 0; j < (int) words[i].length(); j++)
      currentSize += (words[i][j] - 96);
    if(currentSize > maxSize) {
      maxSize = currentSize;
      maxString = words[i];
      currentSize = 0;
    }
  } return maxString;
}