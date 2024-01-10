using namespace std;

class TwoToOne {
public:
    static string longest(const string &s1, const string &s2) {
      vector<bool> alphabets (26, false);
      for(int i = 0; i < (int) s1.length(); i++)
        alphabets[s1[i] - 97] = true;
      for(int i = 0; i < (int) s2.length(); i++)
        alphabets[s2[i] - 97] = true;
      string result = "";
      for(int i = 0; i < 26; i++)
        if(alphabets[i])
          result += char(i + 97);
      return result;
    };
};