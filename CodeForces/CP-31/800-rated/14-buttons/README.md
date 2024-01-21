# 14. Buttons

* problem 14 of the tle cp-31 sheet (the 800-rated page)
* codeforces round 893 (div 2) problem A
* problem link: https://codeforces.com/problemset/problem/1858/A

## Solution Notes

* anna can press A buttons only
* katie can press B buttons only
* both of them can press C buttons
* anna makes first turn
* if anna wins, katie loses, output FIRST
* if katie wins, anna loses, output SECOND
<br>

* if a == b and c is even, print SECOND
* if a == b and c is odd, print FIRST
* if a + c > b + c, print FIRST
* if a + c < b + c, print SECOND