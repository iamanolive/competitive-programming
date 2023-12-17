# T. Sort Numbers

* Problem T from TLE Eliminators Level 1 (Sheet #1)
* Problem requires us to print the original array as output, right after the sorted array, so we cannot change the order of the original array. This means we have to copy the original array into another array and sort the copied array.
* this can be done using the copy function in the algorithm header with the syntax as: copy(pointer to beginning of array to copy from, pointer to end of array to copy from, pointer to array that is to be copied into).
* the copied array can then be sorted using the sort function from the same algorithm header.