# Sequence Characters

* virtual participation in past tle level 1 contest
* link to problem: https://codeforces.com/group/Is2YXwUuFr/contest/447174/problem/D

## Solution Notes

* if the key worked properly, char 'x' was printed
* if the key was faulty, char 'x' was printed twice in succession
* given string S, identify all characters that are working properly (such that S[i] != s[i - 1] and s[i] != s[i + 1])
* but above method fails if there's more than 2 consecutive characters appearing in the string. we still use the above method but also add in characters to the result string if their total occurrence count is not a multiple of 2 (aka they appear an odd number of times in the string)