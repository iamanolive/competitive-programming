# The Bucket List

* USACO 2018 December Contest, Bronze, Problem 2
* solved on the official USACO training site
* problem link: http://www.usaco.org/index.php?page=viewproblem2&cpid=856

## Solution Notes

* N cows, cow[i] has to be milked from time s[i] to t[i] and requires b[i] buckets for storage
* the two arrays can contain no duplicates between their own elements and also between the elements of each other
* at each s[i], collects b[i] buckets with smallest available labels
* minimum number of total buckets needed in the storage room