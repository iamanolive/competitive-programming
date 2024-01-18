# 3. Longest Palindrome

* problem 3 of the IARCS OPC problem set of the ZCO-training course on CodeChef
* problem link: https://www.codechef.com/practice/course/zco-inoi-problems/IARCSJUD/problems/LONGPALI

## Solution Notes

* set the variable 'current' to the character at index i in the input word
* iterating from the end of the word (for loop where the integer iterates from word.size() - 1 until i + 1)
* from the first occurrence of the same character as that stored in 'current', we check to see if all the characters between them form a palindrome
<br>
```
for(i from 0...length-1)
    current = char at i
    for(j from length...i+1)
        if (char at j) == current
            index1 = i, index2 = j
            while index1 != index2
                index1++, index2++
                if char[index1] == char[index2]
                    palindrome += char[input1]
                if char[index1] != char[index2]
                    set palindrome to empty
                    break out of while loop
            if palindrome.length > maxPalindrome.length
                maxPalindrome = palindrome
    print maxPalindrome.length
    print maxPalindrome
```