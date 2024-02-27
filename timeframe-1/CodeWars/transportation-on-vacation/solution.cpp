#include <iostream>
using namespace std;

int rental_car_cost(int d){
  if(d < 3) return 40 * d;
  else if(d < 7) return 40 * d - 20;
  else return 40 * d - 50;
}