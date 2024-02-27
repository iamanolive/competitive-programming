# 21. Two-Gram

* codeforces round 479 (div 3)
* problem link: https://codeforces.com/problemset/problem/977/B
* submission 1: accepted!!!

## Solution Notes

* we could create a map that stores every possible two-gram and its count in the string. 
* if the current two-gram we're iterating over is already present as a key, its count gets incremented by one, else a new key is set and its value is set to 1
* sort the map according to their values, and output the key with the highest value