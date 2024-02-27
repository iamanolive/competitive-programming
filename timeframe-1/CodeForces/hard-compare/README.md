# Z. Hard Compare

* Problem Z from TLE Eliminators Level 1 (Sheet #1)
* The maximum possible numbers in the test cases result to a higher value than can be stored in variables of type long long, so we cannot do the all the operations one by one.
* We also cannot use the power function because c++ often makes errors when calculating the powers of large numbers.
* So instead we use the log function from the cmath header. If b * log(a) is greater than d * log(c), then print "YES". Otherwise, print "NO".