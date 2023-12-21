# D. Sum Neq

* problem D in the CodeChef Starters 113 (Division 4)
* rated 1448 on CodeChef

## Solution Notes

* array A containing n positive integers
* to check whether 4 distinct indices (i, j, k, l) exist such that i < j < k < l and A[i] + A[j] != A[k] + A[l]
* array A cannot satisfy the given conditions if:
    1. array contains only one kind of element
    2. array contains only two kinds of elements AND they are all arranged alternatively
    3. array.size == 4, and array[0] + array[1] == array[2] + array[3]