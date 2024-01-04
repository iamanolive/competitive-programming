#include <iostream>
using namespace std;

int past(int h, int m, int s) {
  return 1000 * (s + 60 * (m + h * 60));
}