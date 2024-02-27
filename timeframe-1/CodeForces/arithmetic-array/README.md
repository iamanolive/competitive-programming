# A. Arithmetic Array

* Problem 3 from the c2 ladders
* Rated 800 on CodeForces
* Link to Problem: https://codeforces.com/problemset/problem/1537/A

## Solution Notes

* array of length K is called GOOD if it's mean == 1
* sum of all it's elements / length == 1
* min number of non-negative integers that need to be appended to make the input array GOOD


- the sum of all the elements should be equal to the length
- but length changes with each element that gets added
- but non-negative INCLUDES 0

* 1 + 2 = 2 { result = 1 }
* 2 + 4 + 6 + 8 = 4 { result = 16 }
* -2 = 1 { result = 1 }

- if sum == length { print 0 }
- if sum < length {print 1 }
- if sum > length { print (sum - length) }