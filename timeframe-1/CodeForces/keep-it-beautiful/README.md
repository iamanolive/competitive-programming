# 1841B. Keep it Beautiful

* Problem B from CodeForces Educational Round 150
* Div 2 on CodeForces, rated 1000
* Link to problem: https://codeforces.com/problemset/problem/1841/B

## Notes while Solving

* to redefine the question, the input array is said to be beautiful if it can be seperated into two distinct arrays such that the elements in each are sorted in the increasing order.
* iterating over all the elements of the array, if we ever come across an element that is smaller than the one before it AND also smaller than or equal to the first element of the array, then we set the bool to true (denoting that the only possible case where current element can be smaller than the prev element has been found, and so in the future any element that is smaller than its prev element will NOT be appended) 
* after that, only elements that are smaller than or equal to the first element and greater than or equal to the prev element can be appended to the array.
* all other elements that do not satisfy these conditions are cast off.