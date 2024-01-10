#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

string seriesSum(int n) {
  double result = 0.0;
  double denominator = 1.0;
  for(int i = 0; i < n; i++) {
    result += 1.0 / denominator;
    denominator += 3.0;
  } stringstream ss;
  ss << fixed << setprecision(2) << result;
  string x; ss >> x;
  return x;
}