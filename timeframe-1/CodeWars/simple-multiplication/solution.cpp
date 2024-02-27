#include <iostream>

int simpleMultiplication(int a) {
  if(a & 1) return a * 9;
  else return a * 8;
}