# 5. When?

* AtCoder problem with rating of 100 points
* problem link: https://atcoder.jp/contests/abc258/tasks/abc258_a
* AtCoder Beginner Contest 258

## Solution Notes

* starts at 21.00 JST and lasts for 100 minutes
* given integer K, print K mins after start time in the HH:MM format
* if K < 10, print 21:0K
* if K < 60 print 21:K
* if K == 60, print 22:00
* if K < 70 print 22:0(K-60)
* else print 22:(K-60)