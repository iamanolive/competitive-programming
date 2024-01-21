# 17. Forbidden Integer

* problem 16 of the tle cp-31 sheet (the 800-rated page)
* educational codeforces round 151 (div 2) problem A
* problem link: https://codeforces.com/problemset/problem/1845/A

## Solution Notes

* input N, K, X
* if X != 1, print vector containing N occurrences of the element 1
* else if X == 1, check if there exists some method by which N can be made into a multiple of 2. if yes, print YES and a vector of all the elements that need to be added together to obtain a multiple of 2 and the number of times 2 needs to be added to get 0. else print NO.

```
if X != 1
    print YES
    for(0...n-1) print 1
else if X == 1
    if N % 2 == 0
        print YES
        for(0...N/2) print 2
    else if N % 2 != 0
        result = "NO"
        for(i from 2...min(N, K))
            if N - i % 2 == 0
                result = "YES"
                print YES
                print i
                for(1...N-i/2)
                    print 2
        if result == "NO"
            print NO
```