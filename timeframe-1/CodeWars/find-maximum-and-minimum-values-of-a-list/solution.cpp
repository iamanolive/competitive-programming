#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min(vector<int> list){
  sort(list.begin(), list.end());
  return list[0];
}

int max(vector<int> list){
    sort(list.begin(), list.end());
    return list[list.size() - 1];
}