#include <string>
#include <vector>
using namespace std;

string likes(const vector<string> &names) {
  int likes = names.size();
  if(likes == 0) return "no one likes this";
  if(likes == 1) return names[0] + " likes this";
  if(likes == 2) return names[0] + " and " + names[1] + " like this";
  if(likes == 3) return names[0] + ", " + names[1] + " and " + names[2] + " like this";
  return names[0] + ", " + names[1] + " and " + to_string(likes - 2) + " others like this";
}