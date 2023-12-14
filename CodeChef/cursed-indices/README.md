#E. Cursed Indices

* problem E in the CodeChef Starters 112 round (Division 4)
* rated 1803 on CodeChef

##Implementation of the solution

* using a multiset (works the same as a c++ set, but with the added capability of storing duplicate values) because of the set.upper_bound() function it provides
* upper_bound function gives the minimum value in the set that is strictly greater than the value of the argument passed
* start with inputting values into the multiset (multisets automatically sort all the values entered into them)
* initialize a vector for storing all indices that AREN'T cursed
* loop through all elements in the multiset
* if, on applying the upper_bound function, the value returned is set.end(), then exit the loop (because there is no value remaining that is greater than currentSum)
* else add the value returned by upper_bound to the vector, and delete that value from the multiset, so that the multiset now only contains values that are at cursed indices and/or that haven't been checked yet. repeat until set is empty or all remaining indices are cursed.
* then output the size of set, which denotes the total number of cursed indices, followed by all the values in the vector (non-cursed indices) and the values in the multiset (cursed indices), in that order