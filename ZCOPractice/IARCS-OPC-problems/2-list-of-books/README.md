# 2. List of Books

* problem 2 of the IARCS OPC problem set of the ZCO-training course on CodeChef
* problem link: https://www.codechef.com/practice/course/zco-inoi-problems/IARCSJUD/problems/BOOKLIST

## Solution Notes

* when a book is borrowed, record its position from the left among all the books currently on the shelf
* using 0-based indexing
<br>

* M = number of books in library
* array of size M containing the sequence in which the books are arranged in the library
* N = number of entries in the register
* array of size N containing position of the i th book borrowed
<br>

* remove element at index arrayN[i] - 1 from the array arrayM, such that all the elements get shifted one place to the left. continue until you have looped through the entirety of arrayN.