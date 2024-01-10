#include <bits/stdc++.h>
using namespace std;

vector<int> deleteNth(vector<int> arr, int n) {
  map<int, int> numbers;
  vector<int> result;
  for(int i = 0; i < (int) arr.size(); i++) {
    numbers[arr[i]]++;
    if(numbers[arr[i]] <= n)
      result.push_back(arr[i]);
  } return result;
}