# The Cow-Signal

* USACO 2016 December Contest, Bronze
* solved on the official USACO training site
* problem link: http://www.usaco.org/index.php?page=viewproblem2&cpid=665

## Solution Notes

* dimensions of sheet of paper is N * M
* amplify signal so that it is K times bigger in each direction
* signal consists of '.' and 'X' characters only
* output K * M lines, each with K * N characters
* repeat each line K times, and each character K times

<br>

* in a single line, loop over each character k times
* loop over every line in the signal k times