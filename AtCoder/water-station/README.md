# A. Water Station

* problem A in AtCoder Beginner Contest 305
* solved not as part of contest, but for practice (KYOCERA Programming Contest 2023)
* rating of 100 on AtCoder
* link to problem: https://atcoder.jp/contests/abc305/tasks/abc305_a

## Solution Notes

* total course length = 100 km
* distance between every water station = 5 km (incl. start and end of course)
* total water stations = 21
* takahashi current point = N km
* find position of the nearest water station

<br>

* starts from 0, runs to 100. first water station is at 0, second at 5, with more located at every multiple of 5.
* find the multiple of 5 that's nearest to N