## Solution Notes

* N buckets, each of which has A[i] wooden squares of side 1
* find if sum of all elements of array A[N] is a perfect square

* sumbmission 1: wrong answer on test 3, used int as datatype for sum, should have used long long
* submission 2: time limit exceeded on test 3, now trying with the sqrt() function (checking if sqrt(sum) * sqrt(sum) == sum) instead of looping over all elements from 1 until j*j is less than or equal to sum
* submission 3: wrong answer on test 2
* submission 4: wrong answer on test 3
* submission 5: changed the datatypes of the sum and squareroot variables to be of type double, wrong answer on test 2
* tutorial: apparently binary search is supposed to work for determining whether the sqrt of sum exists as a natural number.
* submission 6: it DOES accept binary search