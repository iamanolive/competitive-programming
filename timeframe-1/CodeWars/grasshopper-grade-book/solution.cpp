char getGrade(int a, int b, int c) {
  double avg = (double(a) + double(b) + double(c)) / 3;
  if(avg >= 90) return 'A';
  if(avg >= 80) return 'B';
  if(avg >= 70) return 'C';
  if(avg >= 60) return 'D';
  return 'F';
}