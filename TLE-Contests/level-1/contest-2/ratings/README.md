# Ratings

* virtual participation in past tle level 1 contest
* link to problem: https://codeforces.com/group/Is2YXwUuFr/contest/447174/problem/A

## Solution Notes

* plan sheet for next N days, solve problem greater than the one he solved the previous day, except for day 1
* rating[i] >= rating[i - 1]
* for each index from 2 to N, rating[i] % rating[i - 1] != 0 and rating[i] >= rating[i - 1]
* print N numbers that satisfy both conditions

<br> <br>

* ratings for day[i] and day[i - 1] cannot be equal, because then day[i] will be completely divisible by day[i - 1], so the ratings should all be in strictly increasing order