# 9. Goals of Victory

* problem 9 of the tle cp-31 sheet (the 800-rated page)
* codeforces round 902 (div 2, based on compfest 15 final round) problem A
* problem link: https://codeforces.com/problemset/problem/1877/A

## Solution Notes

* N teams in a football tournament, each pair of teams match up once
* efficiency of team Z = total goals scored by Z - total goals scored by opponents
* find efficiency of the missing team
* from the example test cases, we find that the efficiency of the remaining team is the sum of the array containing efficiencies of the n - 1 teams, multiplied by -1.