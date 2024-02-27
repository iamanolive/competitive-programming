long long rowSumOddNumbers(unsigned n) {
  long long firstNum = (n * n) - (n - 1);
  long long result = 0;
  for(unsigned i = 0; i < n; i++) {
    result += firstNum;
    firstNum += 2;
  } return result;
}