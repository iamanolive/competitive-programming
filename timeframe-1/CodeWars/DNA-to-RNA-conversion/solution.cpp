#include <iostream>
#include <string>
using namespace std;

string DNAtoRNA(string dna) {
  string result = "";
  for(int i = 0; i < dna.length(); i++) {
    if(dna[i] == 'T') result += 'U';
    else result += dna[i];
  } return result;
}