#include <bits/stdc++.h>
using namespace std;

string DNAStrand(const string& dna) {
  string result = "";
  for(int i = 0; i < dna.length(); i++) {
    if(dna[i] == 'A') result += 'T';
    else if(dna[i] == 'T') result += 'A';
    else if(dna[i] == 'C') result += 'G';
    else if(dna[i] == 'G') result += 'C';
  } return result;
}