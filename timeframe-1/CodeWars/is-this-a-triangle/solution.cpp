#include <iostream>

namespace Triangle {
  bool isTriangle(int a, int b, int c) {
    if(a + b <= c || a + c <= b || c + b <= a || a < 1 || b < 1 || c < 1) return false;
    else return true;
  }
};