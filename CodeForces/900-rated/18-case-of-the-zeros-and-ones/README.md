# 18. Case of the Zeros and Ones

* codeforces round 310 (div 2)
* problem link: https://codeforces.com/problemset/problem/556/A
* submission 1: wrong answer on test 7 (only checked for str[i] == '1' and str[i+1] == '0', when i should have checked for two consecutive elements that are not equal to each other)
* submission 2: time limit exceeded on test 12 (so it cannot work on strings of length 200000)
* submission 3: accepted (completely changed methods and checked for count of 1s and 0s instead)

## Solution Notes

* for loop that iterates over all the characters of the string, and starts all over from character 1 when it finds two characters that aren't equal
* but this method exceeds the time limit of 1 second
* another method is to count the total occurrences of the character '1' in the string and also the total occurrences of the character '0' in the string. output the initial length of the string minus 2*min('1' count, '0' count)