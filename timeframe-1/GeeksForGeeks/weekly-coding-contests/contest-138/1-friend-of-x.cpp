#include <iostream>
#include <vector>
#include <string>
using namespace std;

string isFriend(int n, int x, int y, vector<int> &arr) {
    for(auto element : arr)
        if(x + element == y) return "yes";
    return "no";
}