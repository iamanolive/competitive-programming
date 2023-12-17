# U. Float or Int

* Problem U from TLE Eliminators Level 1 (Sheet #1)
* take the input in a variable of type float, because the int datatype will delete the fractional part is the input does happen to be a float.
* if the float variable rounded to the nearest integer is still equal to the original value of float,then it is certain that it is an integer.
* if the rounded float variable is not equal to its original value, then it is a float. 
* in this case, first print the whole number part of the variable, by rounding down the float to it's nearest smallest integer (using the floor function from the cmath header).
* then print the fractional part of the float, by subtracting the floored value of the float from its original value.