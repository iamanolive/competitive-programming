#include <iostream>
using namespace std;

int paperwork(int n, int m){
    return (n < 0 || m < 0) ? 0 : n * m;
}