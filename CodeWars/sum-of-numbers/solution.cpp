#include <bits/stdc++.h>
using namespace std;

int get_sum(int a, int b) {
  if(a > b) swap(a, b);
  int sum = 0;
  for(int i = a; i <= b; i++)
    sum += i;
  return sum;
}