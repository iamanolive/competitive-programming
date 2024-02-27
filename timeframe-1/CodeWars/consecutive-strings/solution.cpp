#include <string>
#include <vector>
using namespace std;

class LongestConsec {
public:
    static string longestConsec(const vector<string> &strarr, int k) {
      
      int longestStrLength = -1;
      string longestString = "";
      
      for(int i = 0; i <= (int) strarr.size() - k; i++) {
        int currentStrLength = 0;
        string currentString = "";
        for(int j = i; j < i + k; j++) {
          currentString += strarr[j];
          currentStrLength = currentString.length();
        } if(currentStrLength > longestStrLength) {
            longestStrLength = currentStrLength;
            longestString = currentString;
        } currentStrLength = 0;
        currentString = "";
      } return longestString;
    }
};