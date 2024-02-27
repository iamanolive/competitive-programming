#include <string>
using namespace std;

class Printer {
public:
    static string printerError(const string &s) {
      int length = s.length();
      long long counter = 0;
      for(int i = 0; i < length; i++)
        if(s[i] < 97 || s[i] > 109)
          counter++;
      return to_string(counter) + "/" + to_string(length);
    }
};