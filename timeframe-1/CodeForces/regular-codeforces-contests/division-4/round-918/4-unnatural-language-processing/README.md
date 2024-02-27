## Solution Notes

* simple language using a, b, c, d, e
* 'a' and 'e' are vowels V. 'b', 'c' and 'd' are consonants 'C'
* two types of syllables CV and CVC. word is a sequence of syllables
* given a word, split it into syllables
* say, word[i] == C and word[i+1] == V. to determine if we should insert a dot after two characters or after three: if word[i+2] == C and word[i+3] == C, insert dot after 3 characters. else if word[i+2] == C and word[i+3] == V, insert dot after 2 characters.
* submission 1: wrong answer on test case 1, for loop iterates over out of bound values
* submission 2: wrong answer on test case 2, answer on codeforces shows extra characters in result string that weren't shown when tested on the vs code ide with the exact same input.
* submission 3: accepted (added a for loop that removes all elements from the result string that aren't either consonants, vowels or period)