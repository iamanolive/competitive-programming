# 2. Odd Set

* codeforces round 729 (div 2)
* rated 800, problem 1542A
* problem link: https://codeforces.com/problemset/problem/1542/A

## Solution Notes

* multiset containing 2*N integers
* can you split it into exactly N pairs such that the sum of elements in each pair % 2 == 1
* even (2) + even (2) == even (4), so both elements cannot be even
* odd (3) + odd (5) == even (8), so both elements cannot be odd either
* odd (3) + even (2) == odd (5), so we need to create pairs containing one odd and one even integer
* N pairs like that can only be created if there are N even integers and N odd integers in the multiset