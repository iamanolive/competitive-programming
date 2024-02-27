# Sequence Characters

* virtual participation in past tle level 1 contest
* link to problem: https://codeforces.com/group/Is2YXwUuFr/contest/447174/problem/D

## Solution Notes

* if the key worked properly, char 'x' was printed
* if the key was faulty, char 'x' was printed twice in succession
* given string S, identify all characters that are working properly (such that S[i] != s[i - 1] and s[i] != s[i + 1])
* if length of string == 1, print the character
* if length of string == 2 and str[0] == str[1] don't output anything, else output both characters
* if length of string >= 3, if str[i] == str[i + 1], set both str[i] and str[i + 1], set both the elements to 0, else add that element to the list
* sort list alphabetically, remove duplicates and print it.