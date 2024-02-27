#include <iostream>
#include <string>
using namespace std;

string update_light(string current) {
  if(current == "green") return "yellow";
  else if(current == "yellow") return "red";
  else if(current == "red") return "green";
}