#include <iostream>
#include <string>
using namespace std;

string greet(const string& name, const string& owner) {
  if(name == owner) return "Hello boss";
  else return "Hello guest";
}