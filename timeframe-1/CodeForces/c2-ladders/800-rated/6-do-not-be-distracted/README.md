# 6. Do Not be Distracted

* problem link: https://codeforces.com/problemset/problem/1520/A
* codeforces round 719 (div 3) problem A


# Solution Notes

* in the input (unsorted) array, remove all  occurrences of duplicate elements that appear right after each other (such that 'AABA' will turn into 'ABA')
* initialize array of size 26, and iterate over the entire manipulated array, setting the index of whatever letter is found to true. if index of current letter is true and another occurrence of that letter is found, then print NO
* if its possible to iterate over the entire input without finding duplicates, print YES
* (could also be solved by sorting after removing all simultaneously occurring duplicates instead of creating an array)